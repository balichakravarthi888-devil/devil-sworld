/*PROGRAM TO CALCULATE THE DISCOUNT ACCORDING TO THE FOLLOWING CONDITIONS IF
PURCHASE VALUE<1000 DISCOUNT=0, IF PV>=1000& & PV<2000 DISCOUNT=5% OF PV
IF PV>=2000 &PV<3000 DISCOUNT=10%, IF PV>=3000 & PV<5000 DISCOUNT=15% OTHER
WISE THE DISCOUNT GIVEN IS 20% OF PV FIND OUT TOTAL NO OF RECORDS PROCESS
AND TOTOAL PV AND TOTAL DISCOUNT AND NETVALUE(NET=PV-DISCOUNT) AND TOTAL
NET VALUE ALSO*/

#include<stdio.h>
#include<conio.h>
void main()
{
int dno,tr=0;
float pv,dis,tpv=0,tdis=0,net,tnet=0;
char dname[15];
clrscr();
read:
printf("\n Enter the Dealernumber or 0 to exit:");
scanf("%d",&dno);
if(dno==0)
goto end;
else
printf("\n Enter dealername:");
scanf("%s",dname);
printf("\n Enter purchase value:");
scanf("%f",&pv);
if(pv<1000)
dis=0;
else if(pv<2000)
dis=pv*5/100;
else if(pv<3000)
dis=pv*10/100;
else if(pv<5000)
dis=pv*15/100;
else
dis=pv*20/100;
net=pv-dis;
tr=tr+1;
tpv=tpv+pv;
tdis=tdis+dis;
tnet=tnet+net;
printf("\n The Dno is :%d\n Dname is :%s\n purchase value is :%f\n",dno,dname,pv);
printf("\n The discount is :%f\n The net amount is :%f\n",dis,net);
printf("\n*******************************************************************");
goto read;
end:
printf("\n The total records is :%d\n",tr);
printf("\n The total purchase is :%f\n",tpv);
printf("\n The total discount is :%f\n",tdis);
printf("\n The total net amount is :%f\n",tnet);
getch();
}