#include<stdio.h>
int main()
{
    char string[25],substring[25];
    printf("enter a string\n");
    scanf("%s",string);
    printf("enter a substring\n");
    scanf("%s",substring);
    int i=0,j=0;
    while((string[i]!='\0')||(substring[j]!='\0'))
    {
        if( substring[j]!=string[i])
        {
            i++;
            j=0;
        }
        else
        {
            i++;
            j++;
        }
    }
    if(substring[j]=='\0')
    {
        printf("it is a substring\n");
    }
    else
    {
        printf("it is not a substring\n");
    }
    return 0;
}
