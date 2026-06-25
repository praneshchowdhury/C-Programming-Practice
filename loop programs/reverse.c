//Program : Reverse of a number
#include<stdio.h>
int main()
{
    int num,digit,reverse=0,num_copy;
    
    printf("Enter number for reverse : ");
    scanf("%d",&num);

    num_copy = num;
    while(num_copy!=0)
    {
        digit = num_copy%10;
        reverse = reverse * 10 + digit;
        num_copy = num_copy/10;
    }

    printf("Reverse Number : %d",reverse);
}