/* AK-47 silhouette drawing for Turbo C / Turbo C++
   Save as ak47.c or ak47.cpp and run in Turbo C++ (graphics.h).
*/

#include <graphics.h>
#include <conio.h>

void drawReceiver(int x, int y)
{
    int body[8];

    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 2);

    /* main receiver rectangle */
    rectangle(x, y - 10, x + 160, y + 30);
    /* small details */
    rectangle(x + 20, y - 8, x + 60, y + 8);
    line(x + 70, y - 8, x + 70, y + 8);
    /* fill receiver */
    setfillstyle(SOLID_FILL, DARKGRAY);
    body[0] = x + 1;  body[1] = y - 9;
    body[2] = x + 159; body[3] = y - 9;
    body[4] = x + 159; body[5] = y + 29;
    body[6] = x + 1;  body[7] = y + 29;
    fillpoly(4, body);
}

void drawBarrel(int x, int y)
{
    int i;
    int px, py;

    /* barrel: a long thin rectangle + small muzzle */
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 2);
    rectangle(x, y - 4, x + 220, y + 4);

    /* cooling/slotted handguard using small lines */
    for (i = 0; i < 6; i = i + 1)
    {
        px = x + 20 + i * 30;
        py = y - 4;
        line(px, py, px, py - 8);
        line(px + 12, py, px + 12, py - 8);
    }

    /* muzzle */
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(x + 220, y - 6, x + 235, y + 6);
    rectangle(x + 220, y - 6, x + 235, y + 6);
}

void drawStock(int x, int y)
{
    int s[10];

    /* wooden stock (back) */
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 2);

    /* outer shape */
    s[0] = x;    s[1] = y;
    s[2] = x - 80; s[3] = y - 30;
    s[4] = x - 140; s[5] = y - 30;
    s[6] = x - 140; s[7] = y + 30;
    s[8] = x - 80; s[9] = y + 30;
    fillpoly(5, s);

    /* fill wood color */
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(x - 60, y, WHITE);

    /* inner cut */
    setcolor(BLACK);
    rectangle(x - 120, y - 10, x - 40, y + 10);
}

void drawMagazine(int x, int y)
{
    int m[8];

    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 2);

    /* curved magazine */
    m[0] = x;  m[1] = y - 10;
    m[2] = x + 20; m[3] = y - 10;
    m[4] = x + 40; m[5] = y + 30;
    m[6] = x - 10; m[7] = y + 30;
    fillpoly(4, m);

    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(x + 10, y, WHITE);

    /* magazine rib lines */
    line(x + 5, y + 5, x + 35, y + 5);
    line(x + 5, y + 12, x + 35, y + 12);
}

void drawSightAndDetails(int x, int y)
{
    /* rear sight */
    rectangle(x + 40, y - 18, x + 55, y - 6);
    /* front sight */
    rectangle(x + 210, y - 14, x + 218, y - 6);

    /* charging handle */
    rectangle(x + 115, y - 20, x + 142, y - 12);
    /* small pins */
    circle(x + 30, y + 8, 2);
    circle(x + 90, y + 8, 2);
    circle(x + 150, y + 8, 2);
}

int main()
{
    int gd = DETECT, gm;
    int cx, cy;
    int base_x, base_y;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    setbkcolor(BLACK);
    cleardevice();

    /* center for the rifle */
    cx = getmaxx() / 2;
    cy = getmaxy() / 2;

    /* base coordinate near center-left to draw parts relative */
    base_x = cx - 80;
    base_y = cy;

    /* Draw parts in order (back to front) */
    drawStock(base_x - 10, base_y);
    drawReceiver(base_x, base_y);
    drawMagazine(base_x + 40, base_y + 10);
    drawSightAndDetails(base_x, base_y);
    drawBarrel(base_x + 160, base_y);

    /* final outline highlight */
    setcolor(LIGHTGRAY);
    line(base_x - 10, base_y + 35, base_x + 240, base_y + 35);

    getch();
    closegraph();
    return 0;
}
