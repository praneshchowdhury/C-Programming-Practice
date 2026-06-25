//Program : Count total digits of a number
#include<stdio.h>
int main()
{
    int number,count=0;

    printf("Enter any number: ");
    scanf("%d",&number);

    if(number==0)
    {
        count =1;
    }

    else{
        while(number!=0)
        {
            number = number /10;
            count++;
        }
}
    
    printf("Number of digits : %d",count);

}