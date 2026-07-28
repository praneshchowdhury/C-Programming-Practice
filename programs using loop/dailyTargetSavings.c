#include<stdio.h>
int main()
{
    int target,amount,day=1,total=0;
    printf("Enter Your Saving target: ");
    scanf("%d",&target);

   

    while(1){
         printf("\nEnter your amount : ");
         scanf("%d",&amount);
         total = total + amount;

        if(total>=target)
        {
            printf("Congratulation! Target achived in %d days",day);
            printf("\nYou saved total : %d taka",total);
            break;
        }

        else{
            
            printf("Total Saved so far: %d Tk",total);
            printf("\nYou need more %d taka",target - total);
            day++;
        }
    }
}