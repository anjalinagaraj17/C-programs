#include <stdio.h>
#include<string.h>
union Data{
int i;
float f;
char str[20];
};
int main()
{
union Data data;
printf("Size of union: %d", sizeof(data));
return 0;
}
