//shermee
#include<stdio.h>
int main()
{
int d,m,w,y;
printf("Enter the number of days=");
scanf("%d",&d);
y=d/365;
w=(d%365)/7;
m=(d%365)/30;
printf("Number of years=%d\n",y);
printf("Number of weeks=%d\n",w);
printf("Number of months=%d\n",m);
return 0;
}


