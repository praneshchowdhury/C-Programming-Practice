//program: swaping two number using pointer & function
#include <stdio.h>
void swap(int *p1,int *p2){

    int temp = *p1; //temp = num1
    *p1 = *p2; // num1 = num2
    *p2 = temp ; // num2 = num1
}
int main(){
    int num1=10,num2=20;
    
    printf("Before Swap : a = %d b= %d",num1,num2);

    swap(&num1,&num2);// pass the address of num1 ,num2 variables to 'swap' function

    printf("\nAfter Swap : a = %d b= %d",num1,num2);
}