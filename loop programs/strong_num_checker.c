// program: check a number that is strong number or not
#include<stdio.h>
int main(){
    int num,fact,sum=0,copy_num,digit;

    printf("Enter Number to check : ");
    scanf("%d",&num);
    copy_num = num;

    while (copy_num!=0)
    {
       digit = copy_num % 10; 

        fact = 1;
        for(int i=1;i<=digit;i++)
        {
            fact = fact * i;

        }
        sum = sum + fact;
        copy_num = copy_num/10;
    }

    printf("Sum = %d\n",sum);

    if(num==sum){
        printf("It's a strong number\n");
    }
    else{
        printf("It's not a strong number\n");
    }
}