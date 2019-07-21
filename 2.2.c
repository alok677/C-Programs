#include<stdio.h>
 int main()
{
float f,c;
printf("Enter a temperature in faherenheit scale=");
scanf("%f",&f);
c=(f-32)/1.8;
printf("The equivalent temperature in celsius is %f",c);
return 0;
}
