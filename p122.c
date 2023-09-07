#include<stdio.h>
int main()
{
    char string[10];
    printf("enter a string\n");
    scanf("%s",string);
    int length=strlen(string);
    for(int i=0;i<length;i++)
    {
        if((string[i]=='a')||(string[i]=='e')||(string[i]=='i')||(string[i]=='o')||(string[i]=='u'))
         string[i]=(string[i]-32);

    }
    printf("the capitalized string is %s\n",string);
    return 0;
}
