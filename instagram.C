#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main(){
int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  setcolor(14);
  rectangle(150,100,350,300);

  setfillstyle(SOLID_FILL,LIGHTMAGENTA);
  floodfill(151,101,14);
  setcolor(15);
  circle(250,200,50);
  circle(250,200,20);

  setcolor(14);
  rectangle(300,120,320,140);
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(301,121,14);

  outtextxy(180,320,"Instagram look like");

  getch();
  }