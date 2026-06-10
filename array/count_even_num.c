#include<stdio.h>
int main()
{
    //program name : Count Even Numbers

    int i,num[10];
    int count=0,n;
    
    printf("Enter Array Size:");
    scanf("%d",&n);
       printf("Enter Array numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
    if(num[i]%2==0)
    {
        count++;
    }
    }
    printf("Total Even number in this array: %d",count);
}