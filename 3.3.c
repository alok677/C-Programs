#include<stdio.h>
int main()
{
char ch;
printf("Enter an alphabet:");
scanf("%d",&ch);
if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
{
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U');
printf("The entered character %c is a vowel.",ch);
}
else
printf("The entered character %c is a consonent.",ch);
return 0;
}
