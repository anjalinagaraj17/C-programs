#include<stdio.h>
#include<stdarg.h>
int max(int num,...)
{
    int i;
    int max=0,a;
    va_list var_list;
    va_start(var_list,num);
    va_arg(var_list,int);
    for(i=0; i<num; i++)
    {
        if((a=va_arg(var_list,int))>max)
            max=a;
    }
    va_end(var_list);
    return max;
}
void main()
{

    printf("maximum value is %d",max(4,12,67,6,1));
}


