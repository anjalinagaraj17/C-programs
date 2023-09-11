#include<stdio.h>
#include<string.h>
int name(char s1[10]);


int main()
{
char str[10];
printf("enter a string\n");
scanf("%s",str);
name(str);
return 0;
}


int name(char s1[10])
{

printf("hello %s!!",s1);
}
