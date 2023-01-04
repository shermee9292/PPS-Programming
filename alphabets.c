//Alphabets or characaters
#include<stdio.h>
void main()
{
char ch;
printf("Enter the character\n");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
printf("It is an alphabet\n");
else
printf("It is not alphabet\n");
}

