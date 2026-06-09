#include<stdio.h>
#include<string.h>
int main()
{
    char brand[30]="madam", reverse[30];
  int i,len=0,j,k;
  for(i=0;brand[i]!='\0';i++)
  {
    len++;
  }

  for(j=len-1,i=0;brand[j]>=0;i++,j--)

  {
    reverse[i]=brand[j];
  }
  reverse[i]='\0';
  printf("%s\n",brand);
printf("%s\n",reverse);

  int x=strcmp(reverse,brand);

  if(x==0)
  {
    printf("Palindrome");

  }
  else{
    printf("Not Palindrome");
  }
  }
