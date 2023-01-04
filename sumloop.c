//to print the sum of a natural number
#include<stdio.h>
void main()
{
int i=1,n,s=0;
printf("Enter the n value:\n");
scanf("%d",&n);
while(n>=i)
{
s=s+i;
i++;
}
printf("Sum of %d natural numbers is:%d\n",n,s);
}
