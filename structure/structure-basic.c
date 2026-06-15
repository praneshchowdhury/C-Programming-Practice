
//structure declaration
struct Students{
    int roll;
    float cgpa;
};
#include<stdio.h>
int main(){
    // structure initialization
    struct Students s1,s2;
    // variable asign
   s1.roll = 101 ;
   s1.cgpa = 3.5;

   printf("Student 1:\n");
   printf("Roll = %d\n",s1.roll);
   printf("CGPA = %.2f\n",s1.cgpa);

   s2.roll = 102;
   s2.cgpa = 3.6;

   printf("Student 1:\n");
   printf("Roll = %d\n",s1.roll);
   printf("CGPA = %.2f\n",s1.cgpa);



}