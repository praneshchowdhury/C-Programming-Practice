#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){

        //space
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        //star
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}