#include<stdio.h>
int main()
{
    char str1[50]="My name is ",str2[]="Pranesh Chowdhury";
    int i=0,j=0,len=0;
   
    while(str1[i]!='\0')
    {
        len++;
        i++;
    }

    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf("%s",str1);
}