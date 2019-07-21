#include<stdio.h>
int main()
{
int a,b,m,n,gcd;
printf("Enter two number:");
scanf("%d %d",&a,&b);
m=a;
n=b;
while(a!=b)
{
if(a>b)
a=a-b;
else
b=b-a;
}
gcd=b;
printf("The GCD of %d and %d is %d\n",m,n,gcd);
return 0;
}
