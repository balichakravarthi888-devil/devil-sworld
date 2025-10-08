#include <graphics.h>
#include <conio.h>

/* Draw stock (butt) */
void drawStock(int x, int y)
{
    int s[10];
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 2);

    s[0] = x;     s[1] = y;
    s[2] = x - 90; s[3] = y - 25;
    s[4] = x - 160; s[5] = y - 25;
    s[6] = x - 160; s[7] = y + 25;
    s[8] = x - 90; s[9] = y + 25;
    fillpoly(5, s);

    setfillstyle(SOLID_FILL, BROWN);
    floodfill(x - 100, y, WHITE);
}

/* Draw receiver + main body */
void drawBody(int x, int y)
{
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 2);
    rectangle(x, y - 10, x + 200, y + 10);

    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(x + 50, y, WHITE);
}

/* Draw barrel */
void drawBarrel(int x, int y)
{
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 2);
    rectangle(x, y - 3, x + 300, y + 3);

    setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(x + 100, y, WHITE);
}

/* Draw scope */
void drawScope(int x, int y)
{
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 1);
    rectangle(x, y - 15, x + 100, y - 5); /* base tube */
    rectangle(x + 10, y - 25, x + 40, y - 15); /* eyepiece */
    rectangle(x + 60, y - 25, x + 90, y - 15); /* objective lens */

    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(x + 20, y - 20, WHITE);
    floodfill(x + 70, y - 20, WHITE);

    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(x + 50, y - 10, WHITE);
}

/* Draw bipod */
void drawBipod(int x, int y)
{
    setcolor(WHITE);
    line(x, y + 3, x - 20, y + 40);
    line(x, y + 3, x + 20, y + 40);
}

/* Draw magazine */
void drawMagazine(int x, int y)
{
    setcolor(WHITE);
    rectangle(x, y, x + 20, y + 30);

    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(x + 10, y + 10, WHITE);
}

int main()
{
    int gd = DETECT, gm;
    int base_x, base_y;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    setbkcolor(BLACK);
    cleardevice();

    /* Base position for sniper rifle */
    base_x = 200;
    base_y = getmaxy() / 2;

    /* Draw from back to front */
    drawStock(base_x, base_y);
    drawBody(base_x, base_y);
    drawScope(base_x + 50, base_y - 10);
    drawBarrel(base_x + 200, base_y);
    drawMagazine(base_x + 80, base_y + 10);
    drawBipod(base_x + 450, base_y);

    getch();
    closegraph();
    return 0;
}
