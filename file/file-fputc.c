#include<stdio.h>
#include<string.h>

int main(){
    char name[30]="Your Name";
    int i, length = strlen(name);

    //open file
    FILE *file1;
    file1 = fopen("file.txt","w");

    for(i=0;i<length;i++){
        fputc(name[i],file1);
    }
    fclose(file1);
}