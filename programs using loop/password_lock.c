#include<stdio.h>
int main()
{
    int attempt=0,correct_pass=7788,inputed_pass;
    
    while(1)
    {
        printf("Enter Password:");
        scanf("%d",&inputed_pass);

        if(correct_pass==inputed_pass)
        {
            printf("Vault Unlocked!");
            break;
        }

        else{

            attempt++;
           
            if(attempt<3)
            {
                printf("Incorrect password\n");
                printf("Attempt Left %d times\n",3-attempt);
            }

            else if(attempt>=3){
                printf("\nSystem Locked! Call Support.");
                break;
            }
        }
        
    }
}