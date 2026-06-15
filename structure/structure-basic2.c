
//structure declaration
struct Students{
    int roll;
    float cgpa;
};
#include<stdio.h>
int main(){
    // structure initialization (method 1)
    struct Students s1={101,3.45},s2={102,3.7},s3,s4;
     // structure initialization (method 2)
    s3.roll = 103;
    s3.cgpa = 3.49;
    //structure asign
    s4 = s3; //s3 structure asigned to s4 structure

   printf("Student 1:\n");
   printf("Roll = %d\n",s1.roll);
   printf("CGPA = %.2f\n",s1.cgpa);

   printf("\nStudent 2:\n");
   printf("Roll = %d\n",s2.roll);
   printf("CGPA = %.2f\n",s2.cgpa);

    printf("\nStudent 3:\n");
    printf("Roll = %d\n",s3.roll);
    printf("CGPA = %.2f\n",s3.cgpa);

    printf("\nStudent 4:\n");
    printf("Roll = %d\n",s4.roll);
    printf("CGPA = %.2f",s4.cgpa);

}