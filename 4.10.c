#include<stdio.h>
int main()
{
int n,i,j,s,ts=0;
printf("Enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=0;
for(j=1;j<=n;j++)
s=s+j;
ts=ts+s;
}
printf("The sum of the given series is %d",ts);
return 0;
}
