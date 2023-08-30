#include<stdio.h>
int add(float num1,float num2);
int sub(float num1,float num2);
int mul(float num1,float num2);
int div(float num1,float num2);
int main()
{
float num1,num2;
printf("enter two numbers\n");
scanf("%f %f",&num1,&num2);
float res1=add(num1,num2);
printf("addition is %f\n",res1);
float res2=sub(num1,num2);
printf("subtraction is %f\n",res2);
float res3=mul(num1,num2);
printf("multiplication is %f\n",res3);
float res4=div(num1,num2);
printf("division is %f\n",res4);
return 0;
}

int add(float a,float b){
float res1=a+b;
return res1;
}

int  sub(float a,float b){
 float res2=a-b;
return res2;
}

int mul(float a,float b){
float res3=a*b;
return res3;
}

int div(float a,float b){
float res4=a/b;
return res4;
}
