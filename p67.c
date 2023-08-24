#include<stdio.h>
#include<string.h>
int main()
{

    int id;
    char name;
    float bill,total,unit;
    printf("enter the customer ID\n");
    scanf("%d",&id);
    printf("enter the name\n");
    scanf("%s",&name);
    printf("enter the unit consumed\n");
    scanf("%f",&unit);
    if(unit<83.33)
    {
        printf("the minimum bill is 100/-");
    }

    else if((unit>=83.33)&&(unit<=199))
    {
        bill=unit*1.2;
        printf("the bill is %f\n",bill);
    }
    else if((unit>=200 && unit<400))
    {
        bill=238.8+(((unit-199)*1.5));
        printf("the bill is %f\n",bill);
    }
    else if((unit>=400 && unit<600))
    {
    bill=538.8+(((unit-399)*1.8));
    printf("the bill is %f\n",bill);
    }
    else if(unit>=600)
    {
        bill=898.8+(((unit-599)*2.0));
        printf("the bill is %f\n",bill);

    }
    if(bill>400)
    {
        total=(bill*0.15)+bill;
        printf("the total bill is %f\n",total);
    }

    return 0;
}
