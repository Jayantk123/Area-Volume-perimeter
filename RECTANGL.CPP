#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
float l,b,ar,pe;

printf("enter length of Rectangle :");
scanf("%f",&l);

printf("enter breadth of Rectangle :");
scanf("%f",&b);

  ar=l*b;
  pe=2*(l+b);

  printf("The area of Rectangle is %f and Perimeter is %f",ar,pe);

  getch();
  }