#include<stdio.h>
int main()
{
char c;
printf("enter a character:");
scanf("%c",&c);
switch(c)
{
case 'b':
printf("blue");
break;
case 'g':
printf("green");
break;
case 'r':
printf("red");
break;
default:
printf("invalid entry");
}
}
