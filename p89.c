#include<stdio.h>
float prod(int m,float n);
int main()
{
    int m=2;
    float n=9.3;
    float res= prod(m,n);
    printf("%f",res);
    return 0;

}
float prod(int a,float b)
{
    float ans=a*b;
    return ans;
}
