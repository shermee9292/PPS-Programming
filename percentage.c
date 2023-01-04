#include<stdio.h>
void main() {
int marks;
printf("Enter your marks:");

scanf("%d",&marks);


if(marks < 40)
 
printf("Your are Failed");
else if(marks >= 40 && marks < 60)
printf("Second class");
else if(marks >= 60 && marks < 70)
printf("First class");
else 
printf("Distinction");
}
