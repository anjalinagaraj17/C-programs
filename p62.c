#include<stdio.h>
#include<math.h>
int main()
{

    float a,b,c,x,y;
    printf("enter the values for a b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    x=((-b+sqrt((b*b)-4*a*c)/2*a));
    y=((-b-sqrt((b*b)-4*a*c)/2*a));
    printf("the roots are %.2f\n and %.2f\n",x,y);
    return 0;
}
