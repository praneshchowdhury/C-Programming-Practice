#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    int age;

    FILE *file;
    file = fopen("data.txt","a");
    if(file==NULL){
        printf("File Doesn't Created");
    }
    else{
        printf("File Is Created\n");

        printf("Enter Your Name : ");
        fgets(name,sizeof(name),stdin);
        name[strcspn(name,"\n")]='\0';
        printf("Enter Your Age : ");
        scanf("%d",&age);
        
        fprintf(file,"Name = %s , Age = %d \n",name,age);
        fclose(file);
    }
}