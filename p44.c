#include<stdio.h>
int main()
{

    int a,b,or,and,exor,less,gre;
    printf("enter values of a and b\n");
    scanf("%d%d",&a,&b);
    or=a|b;
    and=a&b;
    exor=a^b;
    less=a<<b;
    gre=a>>b;
    printf("or is %d\n and is %d\n exor is %d\n less is %d\n gre is %d\n",or,and,exor,less,gre);
    return 0;

}
