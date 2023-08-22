#include<stdio.h>
#define PI 3.14
int main()
{
    int a;
    printf("enter a side length of a square\n");
    scanf("%d",&a);
    float r=a/2,area;
    area=PI*r*r;
    printf("the area of the circle is %f\n",area);
    return 0;
}

