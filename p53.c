#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("entr the values of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
   d= a > b ? (a > c ? a : c) : (b > c ? b : c);
   printf("the biggest number is %d\n",d);
    return 0;
}
