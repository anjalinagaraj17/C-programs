#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    float b;
    long int c;
    unsigned long int d;
    char char1;
    printf("enter a integer value\n",a);
    scanf("%d",&a);
    printf("enter float value\n",b);
    scanf("%f",&b);
    printf("enter long integer value\n",c);
    scanf("%ld",&c);
    printf("enter unsigned integer value\n",d);
    scanf("%lu",&d);
    printf("enter a charecter\n,",char1);
    scanf(" %c", &char1);
    printf("all values are %d\n%f\n%ld\n%lu\n%c\n", a,b,c,d,char1);
    return 0;
}
