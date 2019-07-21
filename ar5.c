#include<stdio.h>
int main()
{
int i,j,a,n,arr[30];
printf("Enter the value of N:");
scanf("%d",&n);
printf("Enter the number\n");
for(i=0;i<n;i++);
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
a=arr[i];
arr[i]=arr[j];
arr[j]=a;
}
}
}
printf("The number arranged in ascending order are\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}

