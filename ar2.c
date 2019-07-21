#include<stdio.h>
int main()
{
int arr[10],i,num,sum=0;
float avg=0.0;
printf("enter the number:");
scanf("%d",&num);
printf("Enter %d numbers:",num);
for(i=0;i<num;i++)
{
scanf("%d",&arr[i]);
}
printf("Input array elements:");
for(i=0;i<num;i++)
{
printf("%d\n",arr[i]);
}
for(i=0;i<num;i++)
{
sum=sum+arr[i];
}
avg=sum/num;
printf("Sum of all the numbers=%d\n",sum);
printf("average of all the numbers=%f\n",avg);
}
