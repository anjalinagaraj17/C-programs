#include<stdio.h>
int add();
int main()
{
int ans;

ans = add();
printf("%d\n",ans);
return 0;
}
int add()
{
int x=2,y=3,an;
an=x+y;
return an;
}
