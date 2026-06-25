//Program : Armstrong number checker
/*logic===> if any number like==> 153 = 1^3 + 2^3 + 3^3 = 153 ==> armstrong number 
(here power is number of digits)*/
#include<stdio.h>
#include<math.h>
int main()
{
    int count=0,orginal_num,copy_num,digit,sum=0;

    //counting number of digits
    
    printf("Enter any number to check armstrong or not : ");
    scanf("%d",&orginal_num);
    copy_num = orginal_num;
    while(copy_num!=0){
        copy_num = copy_num/10;
        count++;
    }
    
    copy_num = orginal_num;

    //sum
    while(copy_num!=0){
        digit = copy_num%10;
        
        int power =1,i;
        for(i=1;i<=count;i++){
        power = power * digit;
    }

        sum = sum + power;
        copy_num = copy_num/10;
    }

    
        //armstrong check
    if(sum==orginal_num){
        printf("Sum = %d\n",sum);
        printf("It's an Armstrong Number\n");
    }

    else{
        printf("Sum = %d\n",sum);
        printf("It's not an Armstrong Number\n");
    }
    
}