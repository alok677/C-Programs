#include<stdio.h>
int main()
{
int a;
printf("enter a number:");
scanf("%d",&a);
if(a>=0 && a<10)
printf("the entered no. is single digit.");
else
 if(a>=10 && a<100)
printf("the entered no. is two digit.");
else
if(a>=100 && a<1000)
printf("the entered no. is three digit.");
else
if(a>=1000 && a<10000)
printf("the entered no. is four digit.");
else
printf("the entered no. is more than four digit.");
}
