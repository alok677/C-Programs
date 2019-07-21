#include<stdio.h>
int main()
{
char ch;
printf("enter an alphabet:");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
ch=ch-32;
printf("the uppercase letter is %c",ch);
}
else
printf("invalid entry");
}
