#include<stdio.h>
int main()
{
int n;
printf("enter a digit:");
scanf("%d",&n);
switch(n)
{
case 1:
printf("one");
break;
case 2:
printf("two");
break;
case 3:
printf("three");
break;
case 4:
printf("four");
break;
case 5:
printf("five");
break;
default:
printf("invalid entry");
}
}
