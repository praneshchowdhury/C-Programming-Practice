#include<stdio.h>
int main()
{
    int correct_pin=1010,input_pin,is_success=0;
    printf("Atm Pin : %d\n",correct_pin);

    for(int i=1;i<=3;i++)
    {
        printf("Enter Pin : ");
        scanf("%d",&input_pin);


        if(input_pin==correct_pin)
        {
            printf("Access Granted!\n");
            is_success = 1;
            break;
        }

        else
        {
            if(i<3){
                    printf("Worng Pin! Try again.\n");
                    }
           
        }
    }

    if(is_success==0)
        {
         
            printf("Card Blocked!");

        }
}