#include<stdio.h>
int main()
{
    int count=0;
    char name[25],c;
    printf("enter a string\n");
    scanf("%s",name);
    printf("enter a charecter\n");
    scanf(" %c",&c);
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==c)
         count++;

    }
    printf("appears %d times\n",count);

    return 0;
}
