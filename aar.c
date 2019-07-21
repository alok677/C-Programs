#include<stdio.h>
int main()
{
int a[100],n,i,j,temp;
printf("Enter how many numbers:");
scanf("%d",&n);
printf("Enter the value of %d numbers:",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<=n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("The numbers in ascending order are\n");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
