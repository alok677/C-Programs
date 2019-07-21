#include<stdio.h>
int main()
{
int a,b,swap;
printf("insert two number before swapping:\n");
scanf("%d %d",&a,&b);
swap=a;
a=b;
b=swap;
printf("the value after swapping is %d %d",a,b);
return 0;
}
