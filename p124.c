#include<stdio.h>
int main()
{
    char string[10],new_string[10];
    int count=0;
    printf("enter a string\n");
    scanf("%s",string);
    int length=strlen(string);
    for(int i=0; i<length; i++)
    {
        for(int k=i+1;string[k]!='\0';k++)
        {


        if(string[k]==string[i])
        {
            for( int j=k;string[j]!='\0';j++)
            {
                string[j]=string[j+1];
            }
        }

    }
    }

    printf("after removing duplicate elements %s\n",string);

    return 0;
}
