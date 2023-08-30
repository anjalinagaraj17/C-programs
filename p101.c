#include<stdio.h>
int number(int a);
char charecter(char b);
float decimal(float c);
double value(double d);
int main()
{
    int x;
    char y;
    float z;
    double w;
  number( x);
 charecter( y);
  decimal( z);
  value( w);
 return 0;
 }

 int number(int a)
 {
 printf("%d\n",a);
 return a;
 }
 char charecter(char b)
 {
 printf("%c\n",b);
 return b;
 }
 float decimal(float c)
 {
 printf("%f\n",c);
 return c;
 }
 double value(double d)
 {
 printf("%lf\n",d);
 return d;
 }
