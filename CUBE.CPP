#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
float n,vol,surf_area;

printf("enter size of any side of a cube :");
scanf("%f",&n);

vol=pow(n,3);
surf_area=6*pow(n,2);


printf("volume of cube = %f\nsurface area of cube = %f",vol,surf_area);

getch();
}