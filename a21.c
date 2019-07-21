#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three number:\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("the smallest number is %d",c);
else
printf("the smallest number is %d",a);
}
else
{
if(b>c)
printf("the smallest number is %d",c);
else
printf("the smallest number is %d",b);
}
return 0;
}
