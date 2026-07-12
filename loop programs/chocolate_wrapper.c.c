#include<stdio.h>
int main()
{
    int money;
    printf("Enter Money : ");
    scanf("%d",&money);
    int total_chocolate = money;
    int wrapper = money;

    while(wrapper>=3){
        int new_chocolate = wrapper/3;
        total_chocolate+=new_chocolate;
        wrapper = new_chocolate + (wrapper%3);
    }

    printf("Total Chocolate : %d",total_chocolate);
}