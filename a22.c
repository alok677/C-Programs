#include<stdio.h>
int main()
{
int mark;
printf("enter the mark:");
scanf("%d",&mark);
if(mark<=100 && mark>80)
printf("houners");
else 
if(mark<=80 && mark>60)
printf("first division");
else
if(mark<=60 && mark>50)
printf("second division");
else
if(mark<=50 && mark>40)
printf("third division");
else
if(mark<=40 && mark>=33)
printf("only passing mark");
else
printf("fail");
}
