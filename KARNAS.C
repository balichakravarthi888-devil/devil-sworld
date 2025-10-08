/*
  KarnaShield_Enhanced.c
  Upgraded Karna's Shield with multi-layered gold outer ring,
  maroon textured ring, glowing aura, and central sun symbol.
  Turbo C / BGI compatible.
*/

#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int gd = DETECT, gm;
    int maxx, maxy;
    int cx, cy;
    int outerR, ring1R, ring2R, innerR;
    int rays;
    double PI;
    double angStep;
    int rayOuter, rayInner;
    int i, j;
    double a, a1, a2;
    int pts[6];
    int xTip, yTip, xBase1, yBase1, xBase2, yBase2;
    int innerCore;
    int dotX, dotY;
    int dotRadius;
    int glowRadius;

    PI = 3.141592653589793;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    if (graphresult() != grOk) {
	printf("Graphics initialization failed. Check BGI path.\n");
	return 1;
    }

    maxx = getmaxx();
    maxy = getmaxy();
    cx = maxx / 2;
    cy = maxy / 2;

    /* Radii for rings */
    outerR = (cx < cy ? cx : cy) - 20;
    if (outerR > 200) outerR = 200;
    ring1R = outerR - 40;
    ring2R = ring1R - 45;
    innerR = ring2R - 45;
    if (innerR < 20) innerR = 20;
    innerCore = 12;

    /* --- Background --- */
    setbkcolor(BLACK);
    cleardevice();

    /* --- Outer ring: multi-layer gold gradient --- */
    for (i = 0; i < 8; i++) {
	/* Use colors from BROWN to YELLOW for gradient */
	int color = (i % 2 == 0) ? YELLOW : BROWN;
	setcolor(color);
	setfillstyle(SOLID_FILL, color);
	fillellipse(cx, cy, outerR - i * 6, outerR - i * 6);
    }

    /* --- Second ring: deep maroon base with dotted texture --- */
    setfillstyle(SOLID_FILL, DARKGRAY);
    fillellipse(cx, cy, ring1R, ring1R);

    /* Draw maroon dots as texture on second ring */
    dotRadius = 3;
    setfillstyle(SOLID_FILL, RED);
    for (i = 0; i < 36; i++) {  /* 36 dots evenly spaced */
	a = i * (2.0 * PI / 36);
	dotX = cx + (int)(ring1R * cos(a));
	dotY = cy + (int)(ring1R * sin(a));
	fillellipse(dotX, dotY, dotRadius, dotRadius);
    }

    /* --- Third ring: solid maroon */
    setfillstyle(SOLID_FILL, RED);
    fillellipse(cx, cy, ring2R, ring2R);

    /* --- Inner circle (sun background) --- */
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(cx, cy, innerR, innerR);

    /* --- Sun symbol with 12 rays --- */
    rays = 12;
    angStep = 2.0 * PI / rays;
    rayOuter = innerR + 25;
    rayInner = innerR - 6;

    for (i = 0; i < rays; ++i) {
	a  = i * angStep;
	a1 = a - angStep * 0.25;
	a2 = a + angStep * 0.25;

	xTip   = cx + (int)(rayOuter * cos(a));
	yTip   = cy + (int)(rayOuter * sin(a));
	xBase1 = cx + (int)(rayInner * cos(a1));
	yBase1 = cy + (int)(rayInner * sin(a1));
	xBase2 = cx + (int)(rayInner * cos(a2));
	yBase2 = cy + (int)(rayInner * sin(a2));

	pts[0] = xTip; pts[1] = yTip;
	pts[2] = xBase1; pts[3] = yBase1;
	pts[4] = xBase2; pts[5] = yBase2;

	setfillstyle(SOLID_FILL, YELLOW);
	setcolor(YELLOW);
	fillpoly(3, pts);
    }

    /* Sun core */
    setfillstyle(SOLID_FILL, RED);
    setcolor(RED);
    fillellipse(cx, cy, innerCore, innerCore);

    /* --- Decorative outlines and glowing aura --- */
    glowRadius = 5;
    for (j = 0; j < glowRadius; j++) {
    int col = (j % 2 == 0) ? YELLOW : WHITE;
    int xStart = cx + (int)((ring2R - 10) * cos(a));
	int yStart = cy + (int)((ring2R - 10) * sin(a));
	int xEnd = cx + (int)((outerR - 10) * cos(a));
	int yEnd = cy + (int)((outerR - 10) * sin(a));
	line(xStart, yStart, xEnd, yEnd);
       //	int col = (j % 2 == 0) ? YELLOW : WHITE;
	setcolor(col);

	circle(cx, cy, outerR + j);
    }

    /* Circle outlines */


    setcolor(WHITE);
    circle(cx, cy, outerR);
    circle(cx, cy, ring1R);
    circle(cx, cy, ring2R);
    circle(cx, cy, innerR);

    /* Extra rim spokes to add detail */
    setcolor(LIGHTGRAY);


   for (i = 0; i < 16; ++i) {
	a = i * (2.0 * PI / 16);
       /* int xStart = cx + (int)((ring2R - 10) * cos(a));
	int yStart = cy + (int)((ring2R - 10) * sin(a));
	int xEnd = cx + (int)((outerR - 10) * cos(a));
	int yEnd = cy + (int)((outerR - 10) * sin(a));
	line(xStart, yStart, xEnd, yEnd);*/
    }

    /* Label */
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(10, 10, "Karna's Shield - Enhanced with Sun symbol");

    getch();
    closegraph();
    return 0;
}
