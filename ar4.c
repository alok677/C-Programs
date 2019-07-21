#include<stdio.h>
int main()
{
int arr[100],n,c,sum=0;
printf("Enter the n number to add:");
scanf("%d",&n);
printf("Enter %d integers\n",n);
for(c=0;c<n;c++)
{
scanf("%d",&arr[c]);
sum=sum+arr[c];
}
printf("Sum of entered number is:%d\n",sum);
return 0;
}
