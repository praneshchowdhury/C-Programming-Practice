//Program : Sum of two numbers using pointer
#include<stdio.h>
int main(){
    int num1=15,num2=25,sum; //variable decleration

    int *p1,*p2; //pointer decleration

    p1= &num1;
    p2 = &num2; //pointer initialization

    sum = *p1 + *p2; // *p1 ==> value from memory address

    printf("Sum = %d",sum);

}