struct Student{
    char name[20];
    int roll;
    float cgpa;
};
#include <stdio.h>
#include<string.h>
int main(){
    struct Student student[3];
    int i;
    for(i=0;i<3;i++){
    printf("Enter Information For Student %d :\n",i+1);
    printf("Enter Name : ");
    fgets(student[i].name,sizeof(student[i].name),stdin);
    student[i].name[strcspn(student[i].name,"\n")]='\0';
    printf("Enter Roll : ");
    scanf("%d",&student[i].roll);
    printf("Enter CGPA : ");
    scanf("%f",&student[i].cgpa);
    getchar();
}
printf("\n\n");
for(i=0;i<3;i++){
    printf("\nInformation For Student %d\n",i+1);
    printf("Name : %s\n",student[i].name);
    printf("Roll : %d\n",student[i].roll);
    printf("CGPA : %.2f\n",student[i].cgpa);
}
}