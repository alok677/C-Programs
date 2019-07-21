#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
c=SUM(a,b);
printf("Addition of two number is %d",c);
return 0;
}
int SUM(int x,int y)
{
int z;
z=x+y;
return z;
}
