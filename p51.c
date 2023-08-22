#include<stdio.h>
#include<math.h>
int main()
{

    float a, srar,vol;
    printf("enter the side of cube\n");
    scanf("%f",&a);
    srar=6*a*a;
    vol=a*a*a;
    printf("the surface area of cube is %f\n",srar);
    printf("the volume of cube is %f\n",vol);
    return 0;
}
