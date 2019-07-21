#include<stdio.h>
#define row 3
#define col 3
int main()
{
int matrix[row][col]={{2,3,4},{4,5,6},{6,7,8}};
printf("Lower triangular matrix:");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(i>=j)
printf("%d ",matrix[i][j]);
else
printf("%d",0);
}
printf("\n");
}
return 0;
}
