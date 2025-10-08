/*  Hologram City Map (Turbo C3 / BGI)
    - Black background, cyan/blue glow lines
    - Subtle animated scan sweep (press any key to exit)

    Notes:
    * Adjust the BGI path in initgraph (e.g., "C:\\TC\\BGI").
    * Runs best in DOSBox full-screen.
*/

#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

#ifndef min
#define min(a,b) ((a)<(b)?(a):(b))
#endif
#ifndef max
#define max(a,b) ((a)>(b)?(a):(b))
#endif

/* ---------- Styling helpers ---------- */

void fillScreen(int color) {
    setfillstyle(SOLID_FILL, color);
    bar(0, 0, getmaxx(), getmaxy());
}

void glowLine(int x1, int y1, int x2, int y2, int base, int glow, int core) {
    /* soft glow: outer (thin), middle (thick), inner (thin) */
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    setcolor(glow);
    line(x1, y1-1, x2, y2-1);
    line(x1, y1+1, x2, y2+1);

    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
    setcolor(base);
    line(x1, y1, x2, y2);

    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    setcolor(core);
    line(x1, y1, x2, y2);
}

void glowRect(int x1, int y1, int x2, int y2, int base, int glow, int core) {
    glowLine(x1, y1, x2, y1, base, glow, core);
    glowLine(x2, y1, x2, y2, base, glow, core);
    glowLine(x2, y2, x1, y2, base, glow, core);
    glowLine(x1, y2, x1, y1, base, glow, core);
}

void glowCircle(int cx, int cy, int r, int base, int glow, int core) {
    setcolor(glow); circle(cx, cy, r+2);
    setcolor(base); setlinestyle(SOLID_LINE, 0, THICK_WIDTH); circle(cx, cy, r);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH); setcolor(core); circle(cx, cy, r-1);
}

void faintGrid(int step) {
    int maxx = getmaxx(), maxy = getmaxy();
    setlinestyle(DOTTED_LINE, 0, 1);
    setcolor(BLUE); /* very faint */
    for (int x = 0; x <= maxx; x += step) line(x, 0, x, maxy);
    for (int y = 0; y <= maxy; y += step) line(0, y, maxx, y);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
}

void scanLines(int spacing) {
    /* subtle CRT-style scanlines */
    int maxx = getmaxx(), maxy = getmaxy();
    setcolor(DARKGRAY);
    for (int y = 0; y <= maxy; y += spacing) line(0, y, maxx, y);
}

void labelSmall(int x, int y, const char *txt, int color) {
    settextstyle(SMALL_FONT, HORIZ_DIR, 5);
    setcolor(color);
    outtextxy(x, y, (char*)txt);
}

/* ---------- Scene builders ---------- */

void drawCityBlocks(int left, int top, int right, int bottom, int gap) {
    /* Axis-aligned “blocks” with varying sizes */
    int base = LIGHTCYAN, glow = LIGHTBLUE, core = CYAN;
    for (int y = top; y < bottom - 60; y += gap) {
        int rowh = gap - 12 + (rand() % 16); /* slight variability */
        for (int x = left; x < right - 80; x += gap) {
            int w = gap - 16 + (rand() % 22);
            int h = rowh;
            int x2 = x + w, y2 = y + h;
            glowRect(x+2, y+2, x2, y2, base, glow, core);
        }
    }
}

void drawMajorRoads() {
    /* A few strong “arteries” across map */
    int base = LIGHTCYAN, glow = LIGHTBLUE, core = CYAN;

    /* horizontal */
    glowLine(40, 120, getmaxx()-40, 120, base, glow, core);
    glowLine(60, 260, getmaxx()-60, 260, base, glow, core);
    glowLine(30, 380, getmaxx()-30, 380, base, glow, core);

    /* vertical */
    glowLine(140, 40, 140, getmaxy()-40, base, glow, core);
    glowLine(300, 30, 300, getmaxy()-30, base, glow, core);
    glowLine(460, 40, 460, getmaxy()-40, base, glow, core);

    /* diagonals */
    glowLine(40, 420, 240, 200, base, glow, core);
    glowLine(240, 200, 520, 80,  base, glow, core);
    glowLine(120, 80, 420, 340,  base, glow, core);
}

void drawPOIs() {
    /* Points of interest as glowing circles and labels */
    glowCircle(240, 200, 8, LIGHTCYAN, LIGHTBLUE, CYAN);
    labelSmall(252, 188, "HUB-01", LIGHTCYAN);

    glowCircle(460, 120, 6, LIGHTCYAN, LIGHTBLUE, CYAN);
    labelSmall(472, 108, "NODE-A", LIGHTCYAN);

    glowCircle(300, 300, 7, LIGHTCYAN, LIGHTBLUE, CYAN);
    labelSmall(312, 288, "GATE-3", LIGHTCYAN);

    glowCircle(160, 360, 6, LIGHTCYAN, LIGHTBLUE, CYAN);
    labelSmall(172, 348, "STN-9", LIGHTCYAN);
}

void drawFrame() {
    /* Neon frame */
    glowRect(12, 12, getmaxx()-12, getmaxy()-12, LIGHTCYAN, LIGHTBLUE, CYAN);
    glowRect(24, 24, getmaxx()-24, getmaxy()-24, LIGHTCYAN, LIGHTBLUE, CYAN);
}

/* ---------- Animated sweep ---------- */

void drawSweep(int x, int width, int color) {
    int maxy = getmaxy();
    setfillstyle(SOLID_FILL, color);
    bar(x, 30, x + width, maxy - 30);
    /* soft edges */
    setcolor(color);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    line(x-2, 30, x-2, maxy-30);
    line(x+width+2, 30, x+width+2, maxy-30);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");   /* <-- Adjust if needed */

    /* Base: black background */
    fillScreen(BLACK);

    /* Subtle elements that don't change each frame */
    faintGrid(40);
    scanLines(4);
    drawFrame();

    /* City layout */
    drawCityBlocks(50, 60, getmaxx()-50, getmaxy()-60, 80);
    drawMajorRoads();
    drawPOIs();

    /* Title / legend */
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
    setcolor(LIGHTCYAN);
    outtextxy(34, 20, "CITY MAP // HOLOGRAM MODE");
    settextstyle(SMALL_FONT, HORIZ_DIR, 5);
    outtextxy(34, 42, "Blue neon overlay, black background");

    /* Animate a vertical scan-sweep until key pressed */
    int maxx = getmaxx();
    int sweepX = 30;
    int dir = 4;

    while (!kbhit()) {
        /* redraw static hints lightly (to keep crispness) */
        setlinestyle(DOTTED_LINE, 0, 1);
        setcolor(BLUE);
        rectangle(50, 60, getmaxx()-50, getmaxy()-60);
        setlinestyle(SOLID_LINE, 0, NORM_WIDTH);

        /* semi-transparent feel: draw sweep as cyan bar with changing intensity */
        int barW = 18;
        drawSweep(sweepX, barW, DARKGRAY); /* clear previous 'trail' slightly */

        /* brighter pass */
        drawSweep(sweepX, barW, BLUE);
        drawSweep(sweepX+1, barW-2, CYAN);
        drawSweep(sweepX+2, barW-4, LIGHTCYAN);

        /* pulse some major roads to feel alive */
        setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
        setcolor((random(2)==0) ? CYAN : LIGHTCYAN);
        line(60, 260, maxx-60, 260);
        line(140, 40, 140, getmaxy()-40);
        line(40, 420, 240, 200);

        /* sweep motion */
        sweepX += dir;
        if (sweepX > maxx - 40 - barW || sweepX < 40) dir = -dir;

        delay(25);
    }
    getch(); /* consume pressed key */

    closegraph();
    return 0;
}
