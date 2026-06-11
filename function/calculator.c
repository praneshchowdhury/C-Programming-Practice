#include<stdio.h>

float sum(float x,float y)
{
    return x + y;
}

float sub(float x, float y)
{
    float sub = x-y;
    return sub;
}

float mul(float a, float b)
{
    float mul = a*b;
    return mul;
}

float div(float a, float b)
{
    float div= a/b;
    return div;
}


int main()
{
    float num1,num2;

    printf("Enter Two Numbers:");
    scanf("%f %f",&num1,&num2);

    printf("Sum = %.1f\n",sum(num1,num2));

    float result = sub(num1,num2);
    printf("Sub = %.1f\n",result);

    printf("Mul = %.1f\n",mul(num1,num2));

    printf("Div = %.2f\n",div(num1,num2));
}