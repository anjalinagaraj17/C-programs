#include<stdio.h>
int main()
{

    int day;
    printf("enter a value for day of week from 1 to 7\n");
    scanf("%d",&day);
    switch(day)
    {
        case 1: printf("day is sonday\n",day);
        break;
        case 2: printf("day is monday\n",day);
        break;
        case 3: printf("day is tuesday\n",day);
        break;
        case 4: printf("day is wednesday\n",day);
        break;
        case 5: printf("day is thirsday\n",day);
        break;
        case 6: printf("day is friday\n",day);
        break;
        case 7: printf("day is saturday\n",day);
        break;
        default:printf("enter a valid number\n");

    }
    return 0;
}
