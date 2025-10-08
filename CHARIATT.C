#include <graphics.h>
#include <conio.h>
#include <math.h>

#define PI 3.14159265

void drawWheel(int x, int y, int radius, int spokes) {
    int i;
    float angle, rad;

    // Outer wheel
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    circle(x, y, radius);
    floodfill(x, y, BROWN);

    // Inner decorative ring
    setcolor(YELLOW);
    circle(x, y, radius / 2);

    // Spokes
    setcolor(BLACK);
    for (i = 0; i < spokes; i++) {
        angle = (360.0 / spokes) * i;
        rad = angle * PI / 180.0;
        line(x, y,
             x + radius * cos(rad),
             y - radius * sin(rad));
    }
}

void drawTier(int x1, int y1, int x2, int y2, int color) {
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    rectangle(x1, y1, x2, y2);
    floodfill((x1 + x2) / 2, (y1 + y2) / 2, color);
}

int main() {
    int gd = DETECT, gm;
    int i; // ✅ Declare loop variable here
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");

    cleardevice();
    setbkcolor(WHITE);

    /* Base platform with railing */
    drawTier(120, 250, 480, 280, BROWN);
    setcolor(YELLOW);
    for (i = 130; i <= 470; i += 15) {
        line(i, 250, i, 280);
    }

    /* Wheels */
    drawWheel(200, 330, 45, 12);
    drawWheel(400, 330, 45, 12);

    /* Pillars */
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    rectangle(150, 150, 170, 250);
    floodfill(151, 151, BROWN);
    rectangle(430, 150, 450, 250);
    floodfill(431, 151, BROWN);

    /* Roof Tiers */
    drawTier(150, 150, 450, 180, LIGHTRED);
    drawTier(170, 120, 430, 150, LIGHTGREEN);
    drawTier(190, 90, 410, 120, LIGHTBLUE);

    /* Decorative Arches */
    setcolor(YELLOW);
    arc(300, 150, 0, 180, 150);
    arc(300, 120, 0, 180, 120);
    arc(300, 90, 0, 180, 90);

    /* Flag poles */
    setcolor(BROWN);
    line(300, 90, 300, 50);
    line(250, 120, 250, 80);
    line(350, 120, 350, 80);

    /* Flags */
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    line(300, 50, 330, 60);
    line(330, 60, 300, 70);
    line(300, 70, 300, 50);
    floodfill(310, 60, RED);

    line(250, 80, 280, 90);
    line(280, 90, 250, 100);
    line(250, 100, 250, 80);
    floodfill(260, 90, RED);

    line(350, 80, 380, 90);
    line(380, 90, 350, 100);
    line(350, 100, 350, 80);
    floodfill(360, 90, RED);

    /* Title */
    setcolor(BLUE);
    outtextxy(240, 360, "Deluxe Temple Chariot");

    getch();
    closegraph();
    return 0;
}
