#include<stdio.h>
#define PI 3.14
float vol_sphere(int r);
int main()
{
int r;
printf("enter the value of radius\n");
scanf("%d",&r);
float result=vol_sphere(r);
printf("the volume of the sphere is %f\n",result);
return 0;
}
float vol_sphere(int r)
{
float result=((1.333)*PI*r*r*r);
return result;
}
