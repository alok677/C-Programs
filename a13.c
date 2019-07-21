#include<stdio.h>
int main()
{
int a,b,c,sum;
float avg;
printf("enter three numbers:\n");
scanf("%d %d %d",&a,&b,&c);
sum=a+b+c;
avg=sum/3;
printf("the sum is:%d\n",sum);
printf("the avg is:%f\n",avg);
return 0;
}
