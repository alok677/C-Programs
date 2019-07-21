#include<stdio.h>
int main()
{
int num;
int *ptr;
ptr=&num;
num=20;
printf("Using variable num:");
printf("Value of variable num:%d",num);
printf("Address of variable num:%u",&num);
printf("Ussing pointer variabe :");
printf("Value of variable num:%u",ptr);
return 0;
}
