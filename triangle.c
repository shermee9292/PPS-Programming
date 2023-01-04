//To read the three sides and find the area of triangle
#include<stdio.h>
#include<math.h>
void main()
{
float A,s;
int a,b,c;
printf("Enter the values of a,b,c=");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area is= %f",A);
}





















