#include<stdio.h>

void even_or_odd(int x)
{
    if(x%2==0)
    {
        printf("Even");

    }

    else
    printf("Odd");

}
int main() {
    int number;
    printf("Enter A Number:");
    scanf("%d",&number);

    even_or_odd(number);
}
