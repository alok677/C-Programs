#include<stdio.h>
int main()
{
int matrix[10][10],i,j,r,c,sum,product;
printf("Enter number of rows:");
scanf("%d",&r);
printf("Enter number of cols:");
scanf("%d",&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter element[%d,%d]:",i+1,j+1);
scanf("%d",&matrix[i][j]);
}
}
sum=0;
product=1;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum+=matrix[i][j];
product*=matrix[i][j];
}
}
printf("Sum of all elements:%d\nProduct of all elements:%d",sum,product);
return 0;
}
