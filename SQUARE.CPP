#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
float l,b,ar,pe;

printf("enter length of Rectangle :");
scanf("%f",&l);

ar=l*l;
pe=4*l;

printf("The area of square is %f and Perimeter is %f",ar,pe);

getch();
}