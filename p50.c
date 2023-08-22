#include<stdio.h>
#include<math.h>
int main()
{

    float a,b,peri,area;
    printf("enter the value of length\n");
    scanf("%f",&a);
    printf("enter the value of breadth\n");
    scanf("%f",&b);
    peri=2*(a+b);
    area=a*b;
    printf("the perimeter of rectangle is %f\n",peri);
    printf("the area of the rectangle is %f\n",area);
    return 0;
}
