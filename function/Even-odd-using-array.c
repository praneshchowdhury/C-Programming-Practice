#include<stdio.h>

void even_check(int x[]){
    printf("Even: ");
    int i;
    for(i=0;i<5;i++)
    {
        if(x[i]%2==0){
            printf("%d ",x[i]);
        }
    }
}

void odd_check(int x[]){
    int i;
    printf("\nOdd: ");
    for(i=0;i<5;i++){
        if(x[i]%2!=0){
            printf("%d ",x[i]);
        }
    }
}
int main()
{
    int arr[]={2,4,6,7,5};

    even_check(arr);
    odd_check(arr);
}