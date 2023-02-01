//Arguments with return type
#include<stdio.h>
void sum(int x,int y);
void main()
{
int a,b;
printf("\nEnter the value of a and b=");
scanf("%d%d",&a,&b);
sum(a,b);
}
void sum(int x,int y)
{
int c;
c=x+y;
printf("\nSum is=%d\n",c);
}

