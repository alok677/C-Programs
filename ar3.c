#include<stdio.h>
int main()
{
int num[30],i,j,a,n,counter,average;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(num[i]<num[j])
{
a=num[i];
num[i]=num[j];
num[j]=a;
}
}
}
printf("The numbers arranged in descending order are given below\n");
for(i=0;i<n;i++)
{
printf("%d\n",num[i]);
}
printf("The 2nd largest number is=%d\n",num[1]);
printf("The 2nd smallest number is=%d\n",num[n-2]);
average=(num[1]+num[n-2])/2;
counter=0;
for(i=0;i<n;i++)
{
if(average==num[i])
{
counter++;
}
}
if(counter==0)
printf("The average of %d and %d is=%dis not in the array",num[1],num[n-2],average);
else
printf("The average of %d and %d in array is %din numbers",num[1],num[n-2],counter);
}
