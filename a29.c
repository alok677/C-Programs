#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three number:");
scanf("%d %d %d",&a,&b,&c);
if(a<b)
{
if(a<c)
printf("the smallest no. is %d",a);
else
printf("the smallest no. is %d",c);
}
else
{
if(b<c)
printf("the smallest no. is %d",b);
else
printf("the smallest no. is %d",c);
}
}
