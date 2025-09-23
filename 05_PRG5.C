// this program shows the usage of float, double data type

#include<stdio.h>
#include<conio.h>
void main()
{
float amount;
double am;
clrscr();
printf("\n Enter any float value for amount:\a");
scanf("%f",&amount);
printf("\n Enter any double value for am:\a");
scanf("%lf",&am);
printf("\n the float value in amount is :%f",amount);
printf("\n the double value in am is :%lf",am);
getch();
}