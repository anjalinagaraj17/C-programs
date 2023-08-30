#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
    }
    void add()
    {
        int a,b,result;
printf("enter two numbers\n");
scanf("%d %d",&a,&b);
 result=a+b;
printf("the addition is %d\n",result);
    }
