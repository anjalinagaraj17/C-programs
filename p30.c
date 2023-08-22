#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;
printf("enter a value\n");
scanf("%d",&a);
printf("enter b value\n");
scanf("%d",&b);
int c=a;
a=b;
b=c;
printf("%d\n %d\n",a,b);
}
