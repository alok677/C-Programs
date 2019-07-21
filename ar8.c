#include<stdio.h>
int main()
{
int n,i,num[100],sum=0;
float avg;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter %d element:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
printf("Input arraybelements are\n");
for(i=0;i<n;i++)
{
printf("%d",num[i]);
}
for(i=0;i<n;i++)
{
sum=sum+num[i];
}
avg=sum/n;
printf("sum of all numbers=%d",sum);
printf("Average of all numbers=%f",avg);
}
