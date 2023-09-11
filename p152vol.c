#include<stdarg.h>
#include<stdio.h>
double average(int num,...)
{
va_list var_list;
double sum=0;
va_start(var_list,num);
for(int i=0;i<num;i++)
{
int x=va_arg(var_list,int);
sum+=x;
}
va_end(var_list);
return sum/num;
}
int main()
{
    printf("the avearege is %f",average(3,1,2,3));

}
