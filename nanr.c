//No arguments with no return type
#include<stdio.h>
void sum();
void main()
{
sum();
}
void sum()
{
int a,b,c;
printf("Enter the value of a and b=");
scanf("%d%d",&a,&b);
c=a+b;
printf("\nTotal sum is=%d\n",c);
}
