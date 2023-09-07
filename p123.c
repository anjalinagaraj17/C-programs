#include<stdio.h>
int main()
{

    char string[10], keyword[32][10]={"auto","double","int","struct","break","else","long","switch",
    "case","return","union","const","float","short","unsigned","continue",
    "for","signed","void","default","goto","sizeof",
    "voltile","do","if","static","while"};

    printf("enter a keyword: ");
    scanf("%s",string);
    int count=0,i;
    if(string==keyword[32])
        count=1;
    if(count==1)
    {
        printf("it is a keyword");
    }
    else
    {
        printf("it is not a keyword");
    }
    return 0;
}
