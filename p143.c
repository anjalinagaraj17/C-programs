#include<stdio.h>
int main()
{
    struct employee{
    int ID;
    char name[25];
    char contactno[10];
    }e1;
    printf("enter the employee ID: ");
    scanf("%d",&e1.ID);
    printf("enter the employee name: ");
    scanf("%s",e1.name);
    printf("enter the contact number: ");
    scanf("%s",&e1.contactno);
    printf("the employee ID is %d\n",e1.ID);
    printf("the employee name is %s\n",e1.name);
    printf("the contact number is %s\n",e1.contactno);
    return 0;
}
