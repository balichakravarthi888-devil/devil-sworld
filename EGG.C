#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>

 union REGS i,o;
 main()
 {

 int initmouse();
 int count=0;
 int s=5;
 int a=30; int b=0;
  int score=0;
  int level=0;
  char name[40];
 int restrictmouseptr(int,int,int,int);
 int getmousepos(int *,int *,int *);
 int showmouseptr();
int gd=DETECT,gm,maxx,maxy,x,y,button;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//int count=0;
 maxx=getmaxx();
 maxy=getmaxy();
setbkcolor(1);
 setviewport(0,0,maxx,maxy,1);
 gotoxy(26,1);
if(initmouse()==0)
 {
 closegraph();

// int a=30;int b=0;
 restorecrtmode();
//to go back to normal graphics mode or deleting viewport.
 printf("mouse driver not loaded");
 exit(1);
 }
 restrictmouseptr(0,getmaxy()-20,maxx,getmaxy()-15);
//int a=30;int b=0;
 setcolor(0);
 setfillstyle(1,15);
/* int score=0;
 count=20;*/
// int s=5;
// int level=0;
// char name[40];
 gotoxy(5,2);
printf ("PLEASE ENTER YOUR SWEET NAME::-");
 gets(name);
 gotoxy(5,2);
 printf(" ");
 while(!kbhit())
 {
 getmousepos(&button,&x,&y);
setcolor(15);
 setfillstyle(1,15);
 fillellipse(a,b,10,15);
 if((b>getmaxy()-20)&&(b<=getmaxy()-15))
// For checking the egg position.
{
 if(a>=(x-20)&&(a<=(x+60)))
 {
 score+=10;
 gotoxy(320,2);
 textcolor(13);
 printf("your score %d\n:  ",score);
}
 }
 if(b>getmaxy()+40)
 {
 b=0;
 a=random(getmaxx());
 gotoxy(10,2);
 printf("eggs left: ",count);
 count--;
 if(count==-1)
 {
 gotoxy(32,10);
 printf("LEVEL COMPLETED.");
 level++;
 if(level==4)
 {
 goto varun;
 }
 count=10;
 s++;
 getch();
 gotoxy(32,10);
 printf(" ");
 }
 }
 setcolor(10);
 line(x,getmaxy(),x+40,getmaxy());
 line(x,getmaxy(),x-20,getmaxy()-20);
 line(x+40,getmaxy(),x+60,getmaxy()-20);
 line(x-20,getmaxy()-20,x+60,getmaxy()-20);
 delay(10);
setcolor(0);
 line(x,getmaxy(),x+40,getmaxy());
 line(x,getmaxy(),x-20,getmaxy()-20);
 line(x+40,getmaxy(),x+60,getmaxy()-20);
 line(x-20,getmaxy()-20,x+60,getmaxy()-20);
 setfillstyle(1,0);
 fillellipse(a,b,10,15);
 b+=s;
 }
 varun:
 gotoxy(30,12);
 printf("EXCELLENT WORK ",name);
 gotoxy(33,15);
 printf("GAME OVER. ");
 gotoxy(32,18);
printf("YOUR SCORE:",score);
 gotoxy(58,24);
 printf("COMPOSED BY:");
 gotoxy(55,25);
 printf("DEVIL ");
 gotoxy(30,10);
printf("GREATEST SCORE::", 540);
 getch();
 getch();
 return 0;
 }
 initmouse()
 {
 i.x.ax=0;//for initialising mouse.
 int86(0x33,&i,&o);
 return(o.x.ax);
 }
showmouseptr()
 {
 i.x.ax=1; // for displaying mouse pointer.
 int86(0x33,&i,&o);
 return 0;
 }
 restrictmouseptr(int x1,int y1,int x2,int y2)
 {
 i.x.ax=7; //to define the upper left boundry of mouse.
 i.x.cx=x1;
 i.x.dx=x2;
 int86(0x33,&i,&o);
 i.x.ax=8; //to define the bottom right boundry of mouse.
 i.x.cx=y1;
 i.x.dx=y2;
 int86(0x33,&i,&o);
 return 0;
 }
 getmousepos(int *button,int *x, int *y)
 {
 i.x.ax=3; //to move mouse.
 int86(0x33,&i,&o);
 *button=o.x.bx;
 *x=o.x.cx;
 *y=o.x.dx;
 return 0;
 }