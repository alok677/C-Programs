#include<stdio.h>
int main()
{
int n,i,t=1;
printf("Enter a number:");
scanf("%d",&n);
for(i=2;i<=n/2;i++);
{
if(n%i==0)
{
t=0;
break;
}
}
if(t==1)
printf("The number %d is a prime.",n);
else
printf("The number %d is not a prime.",n);
return 0;
}
