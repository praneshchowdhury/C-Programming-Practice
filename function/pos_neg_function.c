//Program : Checking A number Positive or negative using user defined function

#include<stdio.h>

int number_checker(int x){
    if(x>0)
    {
        return 1;
    }

    else{
        return 0;
    }
}
int main()
{
    int num,value;
    printf("Enter Any Number: ");
    scanf("%d",&num);

    value = number_checker(num);

    if(value == 1)
    {
        printf("Positive Number");
    }

    else{
        printf("Negative Number");
    }
}