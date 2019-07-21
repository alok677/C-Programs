#include<stdio.h>
int main()
{
int matrix[10][10],b[10][10],i,j,r,c;
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
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
b[j][i]=matrix[i][j];
}
printf("Transpose matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}
return 0;
}
