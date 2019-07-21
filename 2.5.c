#include<stdio.h>
int main()
{
int a,b,swap;
printf("Enter two number:");
scanf("%d %d",&a,&b);
swap=a;
a=b;
b=swap;
printf("The number after swapping is:%d %d",a,b);
return 0;
}
