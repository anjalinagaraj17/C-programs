#include<stdio.h>
int main()
{
    int ci,p,n,r;
    printf("enter the value of p\n");
    scanf("%d",&p);
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the value of r\n");
    scanf("%d",&r);
    ci=p*(1+(r/100))^n;
    printf("the compound nterest is %d\n",ci);
    return 0;
}

