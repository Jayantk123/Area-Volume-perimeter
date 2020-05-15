#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
float r,ar,cr;

printf("enter Radius :");
scanf("%f",&r);

ar=(M_PI)*pow(r,2);
cr=2*(M_PI)*r;

printf("The area or circle is %f and circumference is %f",ar,cr);

getch();
}