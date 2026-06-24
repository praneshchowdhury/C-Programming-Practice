#include<stdio.h>
#include<string.h>
char name[30];
char email[30];
char phone[20];


void contact_write(){
    //write in file
    FILE *file;
    file = fopen("contact.txt","a");

     if(file==NULL){
        printf("File does not created");
     }

     else{
        //input data from user
     fflush(stdin);
    printf("Enter Name: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';

    printf("Enter Email: ");
    fgets(email,sizeof(email),stdin);
    email[strcspn(email,"\n")] = '\0';

    printf("Enter Phone: ");
    fgets(phone,sizeof(phone),stdin);
    phone[strcspn(phone,"\n")] = '\0';

    fprintf(file,"%s\n%s\n%s\n\n",name,email,phone);

    fclose(file);
     }
}


void contact_read(){
  //read from file
     FILE *file;
     file = fopen("contact.txt","r");

     if(file==NULL){
        printf("File not opened");
     }

     else{
        while(fscanf(file," %[^\n] %[^\n] %[^\n]",name,email,phone)!= EOF){
            printf("Name: %s\nEmail: %s\nPhone: %s\n\n",name,email,phone);
        }
     }
}


int main(){
int num;

do{
    printf("Welcome to Contact Management System\n");
printf("1. Add Contact\n");
printf("2. Display Contact\n");
printf("3. Exit\n");
printf("Enter Your Choice : ");
scanf("%d",&num);

switch(num){
    case 1:
    contact_write();
    break;
    case 2:
    contact_read();
    break;
    case 3:
    printf("Exited");
    break;
    default:
    printf("Ivalid input! Please try again\n\n");
    break;
}
}while(num!=3);

}