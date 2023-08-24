#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a year\n");
scanf("%d",&a);
if(a%4==0)
{
printf("it is a leap year\n");
b=a+4;
printf("the next leap year is %d\n",b);
}
else
{
printf("its not a leap year\n");
c=a%4;
printf("the next leap year is %d\n",((a-c)+4));
}
return 0;
}
