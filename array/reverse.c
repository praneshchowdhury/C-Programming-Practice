#include <stdio.h>
int main()
{
    int i, numbers[5]={1,2,3,4,5};

    printf("Array:");
    for (i=0;i<=4;i++)
    {
        printf("%d\t",numbers[i]);
    }
    printf("\n");
    for(i=4;i>=0;i--)

    {
        printf("%d\t",numbers[i]);
    }
}