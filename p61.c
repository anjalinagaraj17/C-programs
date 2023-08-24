#include<stdio.h>
int main()
{

    int x,y;
    printf("enter the value of a coordinate point\n");
    scanf("%d%d",&x,&y);
    if(x>=0 && y>=0)
        {printf("the co point lies in first qudrant\n");}
    else if(x<=0 && y>=0)
        {printf("the co point lies in second quadrant\n");}
    else if(x<=0 && y<=0)
        {printf("the co point lies in third quadrant\n");}
        else if(x>=0 && y<=0)
            {printf("the co point lies in fourth quadrant\n");}
        return 0;


}
