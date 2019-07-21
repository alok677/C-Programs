#include<stdio.h>
int main()
{
int m,i;
printf("enter the marks of student:");
scanf("%d",&m);
i=m/10;
switch(i)
{
case 10:
case 9:
case 8:
printf("Houners");
break;
case 7:
case 6:
printf("first division");
break;
case 5:
printf("second division");
break;
case 4:
printf("third division");
break;
default:
printf("fail");
}
return 0;
}
