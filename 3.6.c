#include<stdio.h>
int main()
{
int m,t;
printf("Enter total mark secured by a student:");
scanf("%d",&m);
t=m/10;
switch(t)
{
case 9:printf("Secured grade is O.");
break;
case 8:printf("Secured grade is E.");
break;
case 7:printf("Secured grade is A.");
break;
case 6:printf("secured grade is B.");
break;
case 5:printf("Secured grade is C.");
break;
case 4:printf("Secured grade is D.");
break;
default:printf("FAIL");
}
return 0;
}
