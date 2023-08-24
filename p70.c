#include<stdio.h>
int main()
{

    int samsung,realme,redmi,oppo,vivo,a,b;
    samsung=60000;
    realme=80000;
    redmi=15000;
    oppo= 40000;
    vivo=25000;
    printf("input 2 values for budget range\n");
    scanf("%d%d",&a,&b);
    if((samsung>=a)&&(samsung<=b))
    {
        printf("the brands available are samsung\n");
    }
    if((realme>=a)&&(realme<=b))
    {

        printf("the brands available are realme\n");
    }
    if((redmi>=a)&&(redmi<=b))
    {
    printf("the brands are avialbe are redmi\n");
    }
    if((oppo>=a)&&(oppo<=b))
                {
                    printf("the available brands are oppo\n");
                }
    if((vivo>=a)&&(vivo<=b))
                {
                    printf("the available brands are vivo\n");
                }
                return 0;


}
