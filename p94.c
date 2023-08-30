#include<stdio.h>
int LCM(int a,int b)
{
    static int mul=0;
    if(a<b)
    {
        mul+=b;
    }
    else
        mul+=a;
    if ((mul%a==0) && (mul%b==0))
    {
        return mul;
    }
    else
        return LCM(a,b);
}
int main()
{
    int n1,n2,res;
    printf("enter the two number");
    scanf("%d%d",&n1,&n2);
    res=LCM(n1,n2);
    printf("LCM of %d and %d is = %d",n1,n2,res);
    return 0;
}
