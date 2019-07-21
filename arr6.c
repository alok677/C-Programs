#include<stdio.h>
int main()
{
int matrix[10][10],i,j,r,c,sum=0;
printf("Enter number of rows:");
scanf("%d",&r);
printf("Enter number of cols:");
scanf("%d",&c);
printf("Enter matrix elements:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter element[%d,%d]:",i+1,j+1);
scanf("%d",&matrix[i][j]);
}
}
printf("The entered matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",matrix[i][j]);
}
printf("\n");
}
printf("The diagonal of the entered matrix is:\n");
if(r=c)
{
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
if(i==j)
printf(" %d",matrix[j][i]);
else
printf("\t");
}
printf("\n");
}
}
else
{
printf("Matrix is not square matrix.");
}
{
if(j==i)
sum=i+i;
printf("Sum of diagonal of the matrix is:%d\n",sum);
}
return 0;
}
