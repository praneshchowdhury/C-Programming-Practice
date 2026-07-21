#include<stdio.h>
int main()
{
    int water,total_water=0;
    printf("Water Bucket Max Capacity is 20L , Let's Fill it.\n");

    while(1){
        
        printf("Enter water in liter : ");
        scanf("%d",&water);

        total_water = total_water + water;


        if(total_water==20)
        {
            printf("Bucket is full! Game won!");
            break;
        }

        else if(water>20)
        {
            
        printf("Overflowed! You Lost!");
        break;
        }

        else{
        
            printf("Current Water : %d. Give more %dL water\n",total_water,20-total_water);

        
        }

        

        }

        }


   