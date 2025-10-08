#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
       int gd=DETECT,gm,j;
       initgraph(&gd,&gm,"c:\\turboc3\\bgi");
       for(int i=0;i<=500;i=i+10,j++)
       {
       //body
       line(50+i,370,90+i,370);
       arc(110+i,370,0,180,20);
       line(130+i,370,220+i,370);
       arc(240+i,370,0,180,20);
       line(260+i,370,300+i,370);
       line(300+i,370,300+i,350);
       line(300+i,350,240+i,330);
       line(240+i,330,200+i,300);
       line(200+i,300,110+i,300);
       line(110+i,300,80+i,330);
       line(80+i,330,50+i,340);
       line(50+i,340,50+i,370);

       //circle
       circle(110+i,370,17);
       circle(240+i,370,17);
	      delay(100);
	      if(i==200)
	      break;
	      if(j==15)
	      j=2;
	      cleardevice();
	      line(0,390,639,390);
	      }
	      getch();
	      }