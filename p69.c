#include<stdio.h>
#include<stdlib.h>
int main()
{


 int days,years,weeks,dayss,a,b;
 printf("enter the number of days\n");
 scanf("%d",&days);
 years=days/365;
 printf("the number of years %d\n",years);
 a=days%365;
 weeks=a/7;
 printf("the number of weeks %d\n",weeks);
 b=a%7;
 printf("the number of days %d\n",b);
 return 0;
}
