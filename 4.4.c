#include<stdio.h>
int main()
{
int n,i,d,num,sum=0;
printf("Enter a number:");
scanf("%d",&n);
num=n;
while(n!=0)
{
d=n%10;
sum=sum+d;
n=n/10;
}
printf("Sum of the digit of the number %d is:%d\n",num,sum);
return 0;
}

