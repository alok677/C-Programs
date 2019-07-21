#include<stdio.h>
int main()
{
int a[100],b[100],n,c,d;
printf("Enter the number of elements in array:");
scanf("%d",&n);
for(c=0;c<n;c++)
scanf("%d",&a[c]);
for(c=0;c<n;c++)
a[c]=b[c];
printf("Reverse array is\n");
for(c=0;c<n;c++)
printf("%d\n",a[c]);
return 0;
}
