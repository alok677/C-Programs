#include<stdio.h>
int main()
{
int a,b,c;
printf("entered two number:");
scanf("%d %d",&a,&b);
printf("enter 1 for addition,2 for substraction,3 for multiplication,4 for division");
scanf("%d",&c);
switch(c)
{
case 1:
printf("Addition has been performed.The result is %d",a+b);
break;
case 2:
printf("Subtraction has been performed.The result is %d",a-b);
break;
case 3:
printf("Multiplication has been performed.The result is %d",a*b);
break;
case 4:
printf("Division has been performed.The result is %d",a/b);
break;
default:
printf("wrong choice");
break;
}
}
