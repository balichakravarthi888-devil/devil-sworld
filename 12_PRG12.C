/*this program to find out the status of the person based on the age
using if else if else*/

#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("\n enter age of the person:");
scanf("%d",&age);
if(age>=1 &&  age<=18)
printf("\nthe person is a minor");
else if(age>=18 && age<=50)
printf("the person is a major");
else if(age>=50 && age<=120)
printf("the person is an adult");
else
printf(" emotional damage patient dead");
getch();
}