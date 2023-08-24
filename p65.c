#include<stdio.h>
int main()
{

    int a,b,c;
    printf(" enter the value of a b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)||((a+c)>b)||((b+c)>a))
        printf("triangle can be formed\n");
    else if(((a+b)<=c)||((a+c)<=b)||((b+c)<=a))
        printf("triangle cannot be formed\n");

    return 0;
}
