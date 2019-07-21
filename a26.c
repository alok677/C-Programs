#include<stdio.h>
int main()
{
int a;
printf("enter a year:");
scanf("%d",&a);
{
if(a%4==0)
printf("the entered year is a leap year.");
else
printf("the entered year is not a leap year.");
}
}
