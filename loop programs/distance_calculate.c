#include<stdio.h>
int main()
{
    float total_distance=0, height;
    int count=0;
    printf("Enter Height : ");

    scanf("%f",&height);

    while(height>=1)
    {   
        total_distance = total_distance + height;
        count++;
        height = height/2;

        if(height>=1){
            total_distance = total_distance+height;
        }
    }

    printf("Total distance : %.2f",total_distance);
    printf("\nBounce count : %d",count);

}