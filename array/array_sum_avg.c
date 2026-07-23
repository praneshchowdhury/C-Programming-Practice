#include<stdio.h>

int main()
{
    int n,i;

   printf("How many numbers for input : ");
   scanf("%d",&n);

    int num[n],sum=0;

   for(i=0;i<n;i++)
   {
    printf("Enter number %d : ",i+1);
    scanf("%d",&num[i]);
   }

   for(i=0;i<n;i++)
   {
    sum = sum + num[i];
   }

   printf("Sum = %d\nAverage = %.2f",sum,(float)sum/n);
}