#include<stdio.h>
int main(){

    FILE *file;
    file = fopen("info.txt","r");
    // read file data using fgetc() function
    while(!feof(file)){
   
   char ch=  fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
}