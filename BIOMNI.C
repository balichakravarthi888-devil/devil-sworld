#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawBiomnitrix(int x, int y) {
    int i;
    int radius=100;

    // Outer thick black ring
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    circle(x, y, 80);
    floodfill(x, y, WHITE);

    // Outer green ring inside black ring
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    circle(x, y, 70);
    floodfill(x, y, GREEN);

    // Middle black ring
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle(x, y, 55);
    floodfill(x, y, WHITE);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    circle(x, y, radius / 3);
    floodfill(x, y, GREEN);

    // Draw black "X" shape inside the green circle
    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 0, 3);


    line(x - radius/4, y - radius/4, x + radius/4, y + radius/4);
    line(x - radius/4, y + radius/4, x + radius/4, y - radius/4);


    /*/ Center bright green circle
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL, LIGHTGREEN);
    circle(x, y, 40);
    floodfill(x, y, LIGHTGREEN);*/

   // Four petal-like shapes around center
    //setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
   // pieslice(x, y - 10, 260, 80, 30);  // top petal
   // pieslice(x, y + 10, 80, 260, 30);  // bottom petal
    //pieslice(x - 10, y, 170, 350, 30); // left petal
    //pieslice(x + 10, y, 350, 170, 30); // right petal

    /* Inner black ovals (texture)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - 20, y - 10, 7, 12);
    fillellipse(x + 20, y + 10, 7, 12);
    fillellipse(x + 20, y - 10, 7, 12);
    fillellipse(x - 20, y + 10, 7, 12);*/

    // Watch bands - green rectangles on left and right
    setfillstyle(SOLID_FILL, GREEN);
    bar(x - 90, y - 30, x - 60, y + 30);
    bar(x + 60, y - 30, x + 90, y + 30);

    // Band details - black horizontal lines
    setcolor(BLACK);
    for (i = y - 25; i <= y + 25; i += 10) {
	line(x - 90, i, x - 60, i);
	line(x + 60, i, x + 90, i);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    cleardevice();  // clear screen with default background

    drawBiomnitrix(300, 240);

    getch();
    closegraph();
    return 0;
}
