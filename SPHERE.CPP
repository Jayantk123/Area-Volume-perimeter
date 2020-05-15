#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
float n,vol;

printf("enter the radius :\n");
scanf("%f",&n);

vol=(4/3)*(M_PI)*pow(n,3);

printf("volume of sphere = %f\n",vol);

getch();
}