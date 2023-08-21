#include <stdio.h>
#include <stdlib.h>

int main()
{
char id[10];
int hour;
double value,salary;
printf("input the employees ID(max. 10 charecters");
scanf("%s",&id);
printf("\ninput the working hrs");
scanf("%s",&hour);
printf("\nsalary amount/hr");
scanf("%lf",&value);
salary=value*hour;
printf("\nEmployees ID=%s\nsalary=U$ %.2lf\n",id,salary);
    return 0;
}
