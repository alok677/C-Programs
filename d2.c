#include<stdio.h>
 int main()
{
int a,b,c;
printf("Enter a  and b:");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("The value of a and b after swapping is %d %d.\n",a,b);
}
