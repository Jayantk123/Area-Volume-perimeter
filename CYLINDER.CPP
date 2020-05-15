#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
float r,h,vol,surf_area;

printf("enter the value of radius and height :\n");
scanf("%f%f",&r,&h);

vol=(M_PI)*pow(r,2)*h;
surf_area=2*(M_PI)*r*h;


printf("volume of cylinder = %f\nsurface area of cylinder = %f",vol,surf_area);

getch();
}