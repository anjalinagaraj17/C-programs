#include<stdio.h>a
int main()
{

    char a,b;
    printf("enter two alphabets\n");
    scanf("%c %c",&a,&b);
    if((a==b)||(isupper(a)==islower(b))||(islower(a)==isupper(b)))
        printf("both are equal\n");
        else
    printf("both are  not equal\n");
        return 0;
}
