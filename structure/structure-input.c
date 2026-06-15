struct students{
    char name[30];
    int age;
    float cgpa;
}s1,s2;
#include<stdio.h>
int main()
{   printf("Information for student 1:\n");

    printf("Enter Name : ");
    scanf("%s",s1.name);
    printf("Enter Age = ");
    scanf("%d",&s1.age);
    printf("Enter CGPA =");
    scanf("%f",&s1.cgpa);

    printf("Student 1 :\n");
    printf("Name = %s\n",s1.name);
    printf("Age = %d\n",s1.age);
    printf("Cgpa = %.2f\n",s1.cgpa);

    printf("\n\n\nInformation for Student 2:\n");

    printf("Enter Name:");
    scanf("%s", s2.name);
    printf("Enter Age :");
    scanf("%d",&s2.age);
    printf("Enter CGPA :");
    scanf("%f",&s2.cgpa);

    printf("Student 2 :\n");
    printf("Name = %s\n",s2.name);
    printf("Age = %d\n",s2.age);
    printf("CGPA = %.2f\n",s2.cgpa);



}