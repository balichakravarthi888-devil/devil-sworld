#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>

void star()
{
    int pantagon_point[]={300,210, 350,210, 365,265, 325,295, 275,260, 300,210};
    int triangle1_point[]={325,135, 350,210, 300,210, 325,135};
    int triangle2_point[]={435,210, 365,265, 350,210, 435,210};
    int triangle3_point[]={400,340, 365,265, 325,295, 400,340};
    int triangle4_point[]={250,340, 325,295, 275,260, 250,340};
    int triangle5_point[]={220,210, 275,260, 300,210, 220,210};

    setcolor(11);
    setfillstyle(1,15);
    fillpoly(6,pantagon_point); delay(0);
    fillpoly(4,triangle1_point); delay(0);
    fillpoly(4,triangle2_point); delay(0);
    fillpoly(4,triangle3_point); delay(0);
    fillpoly(4,triangle4_point); delay(0);
    fillpoly(4,triangle5_point); delay(0);
}

/* renamed to avoid conflict with graphics.h's circle() */
void drawCircleCustom(int r, int col)
{
    int cx = 328;   /* integer center coordinates */
    int cy = 250;

    setcolor(col);            /* border color */
    circle(cx, cy, r);       /* call graphics.h's circle(x,y,r) */
    setfillstyle(9, col);    /* fill pattern + color */
    floodfill(cx, cy, col);  /* fill inside the circle */
    delay(0);
}

void shield()
{
    drawCircleCustom(227,4);
    drawCircleCustom(190,15);
    drawCircleCustom(150,4);
    drawCircleCustom(120,1);
    star();
    delay(0);
}

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");

    shield();

    getch();
    closegraph();
    return 0;
}

//DEVIL'S CODE
