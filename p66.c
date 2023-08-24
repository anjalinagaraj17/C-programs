#include<stdio.h>
int main()
{
    char x;
    printf("enter some value\n");
    scanf("%c",&x);
    if((x>='a' && x<='z')||(x>='A' && x<='Z'))
        printf("it's a charecter\n");
     else if((x>='0' && x<='9'))
        printf("it's a digit\n");
    else
        printf("it's a special symbol\n");
    return 0;
}
