#include <stdio.h>
#include <stdlib.h>

int main()
{
    long unsigned int A;
    printf("enter value of A");
    scanf("%ld",&A);
    A=abs(A);
    printf("entered absolute values are %ld\n",A);

    return 0;
}
