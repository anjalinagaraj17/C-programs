#include<stdio.h>
int main()
{
    int a=6,b=3,c;

    printf("enter the value of c\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:printf("the addition is %d\n",(a+b));
        break;
        case 2:printf("the subtraction is %d\n",(a-b));
        break;
        case 3:printf("the multiplication is %d\n",(a*b));
        break;
        case 4:printf("the division is %d\n",(a/b));
        break;
        case 5:printf("the modulus is %d\n",(a%b));
        break;
    }
    return 0;
}
