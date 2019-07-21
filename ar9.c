#include<stdio.h>
int main()
{
int arr[100],max,c,size,location=1;
printf("Enter the number of elements in array:");
scanf("%d",&size);
printf("Enter %d integers:",size);
for(c=0;c<size;size++)
scanf("%d",&arr[c]);
max=arr[0];
for(c=0;c<size;c++)
{
if(arr[c]>max)
{
max=arr[c];
location=c+1;
}
}
printf("Maximum element is present at location %d and it value is:%d.\n",location,max);
return 0;
}
