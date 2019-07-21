#include<stdio.h>
int main()
{
char ch;
printf("Enter an alphabet:");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
ch=ch-32;
printf("The uppercase of the entered alphabet is %c\n",ch);
}
else
printf("The entered character is not a lower case alphabet.\n");
return 0;
}
