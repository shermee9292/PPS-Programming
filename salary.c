#include<stdio.h>
void main()
{ 
 int ID,hours_worked;
 float amount_perhour,salary;
 printf("\n enter ID,hours worked per month,amount recieved per hour\n");
 scanf("%d%d%f",&ID,&hours_worked,&amount_perhour);
 salary = (hours_worked*amount_perhour);
 printf("\n salary of employee per month=%f",salary);
}

