#include<stdio.h>
int main()
{
int a,b;
printf("insert value of a,b:\n");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the value after swapping is %d %d",a,b);
return 0;
}
