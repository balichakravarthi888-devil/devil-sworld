#include <graphics.h>
#include <conio.h>
#include <math.h>

#define PI 3.14159265

void drawChakra(int x, int y, int radius, int spokes) {
    int i;
    float angle, rad;

    // Outer golden ring
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(x, y, radius);
    floodfill(x + radius - 1, y, YELLOW);

    // Inner ring
    setcolor(RED);
    circle(x, y, radius - 5);

    // Spokes
    setcolor(RED);
    for (i = 0; i < spokes; i++) {
        angle = (360.0 / spokes) * i;
        rad = angle * PI / 180.0;
        line(x, y,
             x + (radius - 5) * cos(rad),
             y - (radius - 5) * sin(rad));
    }

    // Center circle
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    circle(x, y, radius / 6);
    floodfill(x, y, BLUE);
}

int main() {
    int gd = DETECT, gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");

    setbkcolor(WHITE);
    cleardevice();

    // Draw Vishnu Sudarshana Chakra
    drawChakra(320, 240, 100, 24);

    // Title
    setcolor(BLUE);
    outtextxy(270, 370, "Sudarshana Chakra");

    getch();
    closegraph();
    return 0;
}
