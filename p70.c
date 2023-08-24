#include<stdio.h>
int main()
{

    int samsung,realme,redmi,oppo,vivo,a,b;
    printf("input 2 values for budget range\n");
    scanf("%d%d",&a,&b);
    if((a>=10000)&&(b<20000))
    {
        printf("the brands available are redmi\n");
    }
    else if((a>=20000)&&(b<30000))
    {
        printf("the brands available are vivo\n");
    }
    else if((a>=30000)&&(b<=50000))
            {
                printf("the brands are avialbe are , oppo\n");
            }
            else if((a>50000)&&(b<=70000))
                {
                    printf("the available brands are samsung\n");
                }
                else if((a>70000)&&(b<=100000))
                {
                    printf("the available brands are realme\n");
                }
                return 0;
}
