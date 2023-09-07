#include<stdio.h>
#include<string.h>
int main()
{
char s1[]="hello world";
for(int i=0;i<11;i++)
{
    if(s1[i]==' ')
    {
        s1[i]='*';
    }

}
printf("%s\n",s1);
return 0;
}

