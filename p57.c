#include<stdio.h>
int main()
{

    char x;
    printf("enter a charecter\n");
    scanf("%c",&x);
    if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
        printf("the entered charecter is vowel\n",x);
    else
        printf("the charecter is not a vowel\n",x);
    return 0;
}
