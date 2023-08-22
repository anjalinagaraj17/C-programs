#include<stdio.h>
int main()
{

    float x1,y1,x2,y2,m;
    printf("enter the values of x1,x2, and y1,y2\n");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    m=(y1*y2)/(x1*x2);
    printf("the slope of the line is %f\n",m);
    return 0;
}
