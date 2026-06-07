#include<stdio.h>
int main()
{
  //1^2+2^2+ 3^2 + ....+n^2

  int sum=0, i, num;
  printf("Enter Last Number of this Series:");
  scanf("%d",&num);
  printf("Memory Visualization:\n");
  for(i=1;i<=num;i++)
  {
    printf("Step %d:sum = %d + %d*%d\n",i,sum,i,i);
    sum=sum+i*i;
    

  }
  printf("1^2+2^2+ 3^2 + ....+%d^2 = %d",num,sum);

}