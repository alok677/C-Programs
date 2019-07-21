#include<stdio.h>
 int main()
{
float a,b,c,r,i,d,i1,i2,r1,r2;
printf("Input values for a,b and c:");
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
if(d==0)
{
printf("The roots are equal.\n");
r1=r2=-b/(2.0*a);
printf("Roots are %.2f and %.2f\n",r1,r2);
}
else if(d>0)
{
printf("The roots are real and unequal.\n");
r1=(-b+(d^1/2))/(2.0*a);
r2=(-b-(d^1/2))/(2.0*a);
printf("Roots are %f and %f\n",r1,r2);
}
else
{
printf("The roots are imaginary.\n");
r=-1/(2.0*a);
d=-d;
i=sqrt(d)/(2.0*a);
printf("Root1=%5.2f+i%5.2f\n",r,i);
printf("Root2=%5.2f-i%5.2f\n",r,i);
}
return 0;
}
