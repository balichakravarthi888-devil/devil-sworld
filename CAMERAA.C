/* CAMERA.C — Turbo C3 demo of Professional Camera with Hacker Interface */
#include <graphics.h>
#include <hackers.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

int main(void)
{
    int gd = DETECT, gm, err;
    int midx, midy, i;
    int x, y;       /* reused for hacker animation */
    char ch[2];     /* for random characters */

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    err = graphresult();
    if (err != grOk) {
	printf("Graphics error: %s\n", grapherrormsg(err));
	getch();
	return 1;
    }

    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    /* Background hacker grid */
    setbkcolor(BLACK);
    cleardevice();
    setcolor(DARKGRAY);

    for (i = 0; i < getmaxx(); i += 40)
	line(i, 0, i, getmaxy());
    for (i = 0; i < getmaxy(); i += 40)
	line(0, i, getmaxx(), i);

    /* Camera body */
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 3);
    rectangle(midx - 120, midy - 80, midx + 120, midy + 80);
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(midx, midy, WHITE);

    /* Camera lens (outer circle) */
    setcolor(WHITE);
    circle(midx, midy, 50);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(midx, midy, WHITE);

    /* Inner lens layers */
    setcolor(LIGHTGRAY);
    circle(midx, midy, 35);
    circle(midx, midy, 20);

    /* Flash on top-right */
    setcolor(WHITE);
    rectangle(midx + 80, midy - 100, midx + 120, midy - 80);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(midx + 100, midy - 90, WHITE);

    /* Shutter button on top-left */
    setcolor(WHITE);
    rectangle(midx - 120, midy - 100, midx - 80, midy - 80);
    setfillstyle(SOLID_FILL, LIGHTRED);
    floodfill(midx - 100, midy - 90, WHITE);

    /* Hacker text animation */
    setcolor(GREEN);
    randomize();
    for (i = 0; i < 200; i++) {
	x = rand() % getmaxx();
	y = rand() % getmaxy();
	ch[0] = 33 + (rand() % 90);  /* random ASCII symbols */
	ch[1] = '\0';
	outtextxy(x, y, ch);
	delay(5);
    }

    /* White screen flash effect */
    for (i = 0; i < 3; i++) {
	setbkcolor(WHITE);
	cleardevice();
	delay(100);
	setbkcolor(BLACK);
	cleardevice();
	delay(100);
    }

    /* Final alert message */
    setcolor(RED);
    outtextxy(10, 10, "ALERT: YOUR IMAGE HAD BEEN CAPTURED.......");

    getch();
    closegraph();
    return 0;
}
