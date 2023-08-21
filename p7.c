#include <stdio.h>
#define A 5

int main()
{
    #ifdef A
    printf("HI\n");
    #endif // A
    #ifndef A
    printf("BYE\n");
    #endif // A
    return 0;
}
