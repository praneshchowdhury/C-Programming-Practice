#include<stdio.h>
#include<string.h>
int main()
{
    char name[8];
    printf("Enter Your Name :");
    fgets(name,sizeof(name),stdin);

    printf("Your Name = %s",name);
    int len = strlen(name);
    printf("\n Length = %d",len);



}