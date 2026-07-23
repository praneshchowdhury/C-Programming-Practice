#include<stdio.h>
int main()
{
    int n,i,max,min;

    printf("How many numbers : ");
    scanf("%d",&n);
    int number[n];

    for(i=0;i<n;i++)
    {   
        printf("Enter number %d: ",i+1);
        scanf("%d",&number[i]);
    }

    max = number[0];
    min = number[0];

    for(i=0;i<n;i++)
    {
        if(max<number[i])
        {
            max = number[i];
        }

        if(min>number[i])
        {
            min = number[i];
        }
    }

    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
}