#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter any number:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
sum+=i;
}
if(n==sum)
printf("%d is a perfect number.\n",n);
else
printf("%d is not a perfect number",n);
return 0;
}
