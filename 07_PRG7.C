// this program example for the sizeof() operato

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
printf("\n the int data type occupies :%d bytes", sizeof(int));
printf("\n the signed int data type occupies :%d bytes",sizeof(signed int));
printf("\n the unsigned int data type occupies :%d bytes",sizeof(unsigned int));
printf("\n the short int data type occupies :%d bytes", sizeof(short int));
printf("\n the long int data type occupies :%d bytes",sizeof(long int));
printf("\n the float data type occupies :%d bytes", sizeof(float));
printf("\n the double data type occupies :%d bytes",sizeof(double));
printf("\n the long doubel data type occupies :%d bytes",sizeof(long double));
printf("\n the char data type occupies :%d bytes",sizeof(char));
getch();
}