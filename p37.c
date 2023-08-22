#include<stdio.h>
int main()
{
int a;
printf("enter a value\n");
scanf("%d",&a);
(a%3==0)||(a%7==0)?(printf("its multiple of 3 or 7")):(printf("its not a multiple of 3 or 7"));
return 0;
}
