#include<stdio.h>
int main()
{
int min,max,i;
printf("Enter minimum and maximum range:");
scanf("%d %d",&min,&max);
printf("The numbers are:\n");
for(i=min;i<=max;i++)
{
printf("%d  ",i);
}
return 0;
}
