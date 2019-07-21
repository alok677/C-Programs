#include<stdio.h>
int main()
{
char ch;
printf("enter an alphabet to check it is vowel or consonent:");
scanf("%c",&ch);
if(ch>='A' && ch<='Z'||ch>='a' && ch<='z')
{
printf("the entered character is an alphabet.");
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("the input number is a vowel.");
else
printf("the input number is a consonent.");
}
else
printf("the input number is not an alphabet.");
return 0;
}
