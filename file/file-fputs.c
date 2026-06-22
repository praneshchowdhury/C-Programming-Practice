#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    
    FILE *file;
    file = fopen("info.txt","a");

    if(file==NULL){
        printf("File doesn't exist");
    }

    else{
        printf("File Created!\n");
        printf("Enter Your Name : ");
        
        fgets(name,sizeof(name),stdin);
        fputs(name,file);
        fputs("\n",file);
        printf("Name Stored\n");
    }
    
    fclose(file);
}