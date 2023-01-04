//SWAPPING OF TWO NUMBERS
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the values of a and b=");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("The swapped numbers are=a=%d,b=%d\n",a,b);
}
