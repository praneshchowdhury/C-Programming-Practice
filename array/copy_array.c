#include<stdio.h>
int main()
{
    int i,arr1[5]={1,3,4,5,6},arr2[5];

    for(i=0;i<=4;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("arr2 =");
    for(i=0;i<=4;i++)
    {
        printf("%d ",arr2[i]);
    }

}