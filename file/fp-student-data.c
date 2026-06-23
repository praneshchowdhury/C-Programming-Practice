#include<stdio.h>
int main(){
    char name[30];
    int i,age,phone,num;
    FILE *file;
    file = fopen("test.txt","a");
    printf("How many student:");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        printf("Enter Student Name : ");
        scanf("%s", name);

        printf("Enter Age : ");
        scanf("%d",&age);
        printf("Enter Phone : ");
        scanf("%d",&phone);

        fprintf(file,"%s\t\t%d\t%d\n",name,age,phone);
    }
    fclose(file);
}