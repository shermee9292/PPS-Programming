//To find the simple Interest
#include<stdio.h>
void main()
{
float S,P,T,R;
printf("Enter the Principle amount=\n");
scanf("%f",&P);
printf("Enter the Time Period=\n");
scanf("%f",&T);
printf("Enter the Rate of Interest=\n");
scanf("%f",&R);
S=P*T*R/100;
printf("The simple interest is= %f",S);
}
