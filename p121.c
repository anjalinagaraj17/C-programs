#include<stdio.h>
int main()
{
    char string[10],temp;
    printf("enter a string\n");
    scanf("%s",string);
    int length,i,j;
    length=strlen(string);
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length-1;j++)
        {
            if(string[j]>string[j+1])
            {
                temp=string[j];
                string[j]=string[j+1];
                string[j+1]=temp;
            }
        }
    }
    printf("the sorted string is %s\n",string);



    return 0;
}
