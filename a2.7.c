#include<stdio.h>
int main()
{
int s1,s2,h,m,t;
printf("Enter time in second:");
scanf("%d",&s1);
h=s1/3600;
t=s1%3600;
m=t/60;
s2=t%60;
printf("%dsecond=%dhour,%dminute,%dsecond",s1,h,m,s2);
return 0;
}
