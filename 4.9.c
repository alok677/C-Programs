#include<stdio.h>
int main()
{
int n,i;
float x,y=1.0;
printf("Enter values for x and n:");
scanf("%f %d",&x,&n);
for(i=0;i<=n;i++)
{
y=y*x;
}
printf("%f to the power%d is %f.",x,n,y);
return 0;
}
