#include<stdio.h>
int main()
{

    int a,b,c;
    printf("enter the values for a b c\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b)&&(b==c)&&(c==a))
        printf("the triangle is equilateral\n");
    else if((a==b)||(c==b)||(a==c))
        printf("the triangle is isosceles\n");
    else if((a!=b)&&(b!=c)&&(c!=a))
        printf("the triangle is scalene\n");
    return 0;

}
