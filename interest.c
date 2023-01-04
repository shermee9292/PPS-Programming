#include<stdio.h>
#include<math.h>
void main()
{
int p,t;
float r,si,ci,amount;
printf("Enter the principle,rate of interest,time");
scanf("%d%d%f",&p,&t,&r);
si = p*t*r/100;
printf("simple interest = %2f",si);
amount = p*pow((1+r/100),t);
ci = amount -p;
printf("compound interest = %2f",ci);
}
