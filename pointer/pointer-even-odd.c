// even-odd program using array & function
#include<stdio.h>
void check_even_odd(int x){
    if(x%2==0){
        printf("Even");
    }

    else
    printf("Odd");
}

int main(){

    int num;
    int *ptr;
    ptr = &num;

    printf("Enter Num to check Even or Odd :");
    scanf("%d",&(*ptr));

    check_even_odd(*ptr);
}