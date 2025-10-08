/*  Pirate-Style Treasure Route Map (Turbo C3 / BGI)
    Tested for Turbo C++ 3.0 (16-bit). Uses <graphics.h>

    Tip:
    - Make sure BGI directory path is correct in initgraph (e.g., "C:\\TC\\BGI").
    - Run in full-screen DOSBox/TC environment for proper colors.
*/

#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/* ---------- Small helpers ---------- */

void fillRect(int x1, int y1, int x2, int y2, int color) {
    setfillstyle(SOLID_FILL, color);
    bar(x1, y1, x2, y2);
}

void drawTornEdge(int left, int top, int right, int bottom) {
    /* Draws little notches around parchment edges to suggest torn paper */
    int i;
    setcolor(BROWN);

    /* top edge notches */
    for (i = left + 15; i < right - 15; i += 35) {
        line(i, top, i + 6, top - 8);
        line(i + 6, top - 8, i + 12, top);
    }

    /* bottom edge notches */
    for (i = left + 20; i < right - 20; i += 40) {
        line(i, bottom, i + 7, bottom + 9);
        line(i + 7, bottom + 9, i + 14, bottom);
    }

    /* left edge notches */
    for (i = top + 18; i < bottom - 18; i += 38) {
        line(left, i, left - 9, i + 6);
        line(left - 9, i + 6, left, i + 12);
    }

    /* right edge notches */
    for (i = top + 22; i < bottom - 22; i += 42) {
        line(right, i, right + 8, i + 7);
        line(right + 8, i + 7, right, i + 14);
    }
}

void drawParchment(int left, int top, int right, int bottom) {
    /* Base parchment */
    setcolor(BROWN);
    rectangle(left, top, right, bottom);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(left + 2, top + 2, BROWN);

    /* Outer darker border for aged look */
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    setcolor(BROWN);
    rectangle(left - 2, top - 2, right + 2, bottom + 2);

    /* Torn edges */
    drawTornEdge(left, top, right, bottom);

    /* Scorch marks (small brown arcs) */
    setcolor(BROWN);
    arc(left + 40, top + 22, 220, 320, 18);
    arc(right - 50, top + 26, 200, 310, 14);
    arc(left + 32, bottom - 30, 40, 140, 16);
    arc(right - 35, bottom - 28, 30, 120, 20);
}

void drawCompassRose(int cx, int cy, int r) {
    int i;
    setcolor(DARKGRAY);
    circle(cx, cy, r + 10);

    /* outer ring fill */
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(cx, cy - (r + 9), DARKGRAY);

    /* main star (N,E,S,W) */
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, LIGHTRED);
    /* North */
    line(cx, cy - r, cx - 6, cy);
    line(cx - 6, cy, cx + 6, cy);
    line(cx + 6, cy, cx, cy - r);
    floodfill(cx, cy - r + 2, BLACK);
    /* South */
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    line(cx, cy + r, cx - 6, cy);
    line(cx - 6, cy, cx + 6, cy);
    line(cx + 6, cy, cx, cy + r);
    floodfill(cx, cy + r - 2, BLACK);
    /* East */
    setfillstyle(SOLID_FILL, LIGHTGREEN);
    line(cx + r, cy, cx, cy - 6);
    line(cx, cy - 6, cx, cy + 6);
    line(cx, cy + 6, cx + r, cy);
    floodfill(cx + r - 2, cy, BLACK);
    /* West */
    setfillstyle(SOLID_FILL, LIGHTMAGENTA);
    line(cx - r, cy, cx, cy - 6);
    line(cx, cy - 6, cx, cy + 6);
    line(cx, cy + 6, cx - r, cy);
    floodfill(cx - r + 2, cy, BLACK);

    /* inner circle */
    setcolor(BLACK);
    circle(cx, cy, 6);

    /* labels */
    settextstyle(SMALL_FONT, HORIZ_DIR, 5);
    outtextxy(cx - 6, cy - r - 18, "N");
    outtextxy(cx + r + 8, cy - 6, "E");
    outtextxy(cx - 6, cy + r + 8, "S");
    outtextxy(cx - r - 16, cy - 6, "W");
}

void drawIsland(int cx, int cy, int scale) {
    /* Simple irregular island using overlapping ellipses and circles */
    setcolor(BROWN);
    ellipse(cx, cy, 0, 360, scale + 12, scale);
    ellipse(cx - scale/2, cy - scale/3, 0, 360, scale, scale - 6);
    circle(cx + scale/2, cy + scale/4, scale - 4);

    setfillstyle(SOLID_FILL, LIGHTGREEN);
    floodfill(cx, cy, BROWN);

    /* small beach ring */
    setcolor(YELLOW);
    arc(cx, cy, 30, 330, scale + 8);

    /* palm-like tick marks */
    setcolor(DARKGRAY);
    line(cx, cy, cx + 8, cy - 14);
    line(cx, cy, cx - 10, cy - 10);
    line(cx, cy, cx + 12, cy + 6);
}

void drawWaves(int x1, int y1, int x2, int y2, int step) {
    /* Tiny wave marks outside parchment (in the “sea”) */
    int x, y;
    setcolor(LIGHTCYAN);
    for (y = y1; y <= y2; y += step + 6) {
        for (x = x1 + (y % (2*step)); x <= x2; x += step + 18) {
            arc(x, y, 10, 170, 8);
        }
    }
}

void drawDottedCurve(int *px, int *py, int n, int dotr, int color) {
    /* Connect given points with dotted segments */
    int i, j;
    setcolor(color);
    for (i = 0; i < n - 1; ++i) {
        int x1 = px[i], y1 = py[i];
        int x2 = px[i + 1], y2 = py[i + 1];

        int dx = x2 - x1;
        int dy = y2 - y1;
        int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
        if (steps == 0) steps = 1;

        for (j = 0; j <= steps; j += 6) {
            int x = x1 + (dx * j) / steps;
            int y = y1 + (dy * j) / steps;
            setfillstyle(SOLID_FILL, color);
            fillellipse(x, y, dotr, dotr);
        }
    }
}

void drawXMark(int x, int y, int size, int color) {
    setcolor(color);
    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
    line(x - size, y - size, x + size, y + size);
    line(x - size, y + size, x + size, y - size);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
}

/* ---------- Main scene ---------- */

int main() {
    int gd = DETECT, gm;
    int maxx, maxy;
    int margin = 60;
    int left, top, right, bottom;

    initgraph(&gd,&gm,"c:\\turboc3\\bgi");  /* <-- Adjust path if needed */

    maxx = getmaxx();
    maxy = getmaxy();

    /* sea background */
    fillRect(0, 0, maxx, maxy, LIGHTBLUE);

    /* gentle waves in the sea (outside parchment area) */
    drawWaves(0, 0, maxx, maxy, 18);

    /* parchment area */
    left   = margin;
    top    = margin - 20;
    right  = maxx - margin;
    bottom = maxy - margin + 20;

    drawParchment(left, top, right, bottom);

    /* title */
    settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
    setcolor(BROWN);
    outtextxy(left + 40, top + 10, "Map of the Lost Route");

    /* compass rose (top-right corner inside parchment) */
    drawCompassRose(right - 80, top + 80, 28);

    /* islands on the map */
    drawIsland(left + 120, top + 150, 26);
    drawIsland((left + right)/2, (top + bottom)/2 - 20, 22);
    drawIsland(right - 140, bottom - 140, 28);
    drawIsland(left + 200, bottom - 120, 18);

    /* decorate with small dashed “latitude/longitude” hints */
    setlinestyle(DOTTED_LINE, 0, 1);
    setcolor(DARKGRAY);
    line(left + 50, top + 120, right - 50, top + 120);
    line(left + 50, bottom - 120, right - 50, bottom - 120);
    line((left + right)/2, top + 70, (left + right)/2, bottom - 70);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);

    /* route path (polyline of control points) */
    {
	int px[8], py[8], n = 0;
	/* start near left-bottom, snake across islands, end near right-bottom */
	px[n] = left + 80;      py[n++] = bottom - 90;
	px[n] = left + 160;     py[n++] = bottom - 140;
	px[n] = (left + right)/2 - 60; py[n++] = (top + bottom)/2 + 20;
	px[n] = (left + right)/2 + 20; py[n++] = (top + bottom)/2 - 30;
	px[n] = right - 220;    py[n++] = top + 160;
	px[n] = right - 160;    py[n++] = top + 200;
	px[n] = right - 120;    py[n++] = bottom - 160;
	px[n] = right - 90;     py[n++] = bottom - 120;

	drawDottedCurve(px, py, n, 2, DARKGRAY);

	/* destination X */
	drawXMark(px[n-1], py[n-1], 10, RED);
	settextstyle(SMALL_FONT, HORIZ_DIR, 5);
	outtextxy(px[n-1] + 12, py[n-1] - 18, "Treasure!");
    }

    /* a few decorative rocks / reefs (tiny triangles) */
    setcolor(DARKGRAY);
    line(left + 90, top + 220, left + 100, top + 205);
    line(left + 100, top + 205, left + 110, top + 220);
    line(left + 110, top + 220, left + 90, top + 220);

    line(right - 210, bottom - 90, right - 198, bottom - 110);
    line(right - 198, bottom - 110, right - 186, bottom - 90);
    line(right - 186, bottom - 90, right - 210, bottom - 90);

    /* faint fold lines on parchment */
    setcolor(DARKGRAY);
    setlinestyle(DOTTED_LINE, 0, 1);
    line(left + 20, (top + bottom)/2, right - 20, (top + bottom)/2);
    line((left + right)/2, top + 20, (left + right)/2, bottom - 20);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);

    /* legend */
    settextstyle(SMALL_FONT, HORIZ_DIR, 5);
    setcolor(BLACK);
    outtextxy(left + 30, bottom - 40, "— — —  Route");
    outtextxy(left + 30, bottom - 24, "X         Treasure");

    /* frame/shadow around parchment to pop from sea */
    setcolor(DARKGRAY);
    rectangle(left - 6, top - 6, right + 6, bottom + 6);

    getch();
    closegraph();
    return 0;
}
