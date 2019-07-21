#include<stdio.h>
int main()
{
int x[100],i,sum=0;
{
printf("The values in the array are:");
scanf("%d",&x[i]);
for(i=0;i<50;i++)
{
printf("%d\n",x[i]);
}
for(i=0;i<50;i++)
{
sum=sum+x[i]*x[i];
}
printf("The result is %d",sum);
}
return 0;
}

