 //to find the Compund Interest
#include<stdio.h>
void main()
{
float C;
int P,r,T;
printf("Enter the Principle=\n");
scanf("%d",&P);
printf("Enter the Rate of Interest=\n");
scanf("%d",&r);
printf("Enter the Time Period=\n");
scanf("%d",&T);
C=P*(1+(r/100)*T);
printf("The Compound Interest is=%f",C);
}
