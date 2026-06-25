//Program : Check a number that is palindrome or not
#include<stdio.h>
int main()
{   
    int number,copy_num,digit,reverse;

    printf("Enter number to check palindrome or not : ");
    scanf("%d",&number);
    copy_num = number;

    while(copy_num!=0){
        digit = copy_num%10;
        reverse = reverse * 10 + digit;
        copy_num = copy_num/10;
    }

    if(number==reverse)
    {
        printf("It's a palindrome number");
    }

    else{
        printf("It's not a palindrome number");
    }
}