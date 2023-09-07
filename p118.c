#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("enter a string\n");
    scanf("%s",name);

    printf("the revesed string is %s\n",strrev(name));
    return 0;
}
