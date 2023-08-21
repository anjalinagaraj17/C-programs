#include <stdio.h>
#include <string.h>

int main()
{
    int a=5;
    char char1='K';
    float b=5.5;
    long int c=55;
    unsigned long int d=555;
    printf("integer is %d\n",sizeof(a));
    printf("char is  %c\n",sizeof(char1));
    printf("floating point is %f\n",sizeof(b));
    printf("long integer is %ld\n",sizeof(c));
    printf("unsigned longint is %lu\n",sizeof(d));
    return 0;
}
