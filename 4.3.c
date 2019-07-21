#include<stdio.h>
int main()
{
int n,i;
int fact=1;
printf("Enter a number to find out its factorial:");
scanf("%d",&n);
for(i=n;i>0;i--)
fact=fact*i;
printf("%d!=%d\n",n,fact);
return 0;
}
