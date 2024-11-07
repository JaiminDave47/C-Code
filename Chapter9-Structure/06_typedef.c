// typedef keyword (It creates an alias for data type)

#include<stdio.h>

typedef struct student{
    char name[50];
    int roll;
    float cgpa;
}stu;

int main(){
    stu s1 = {"Jaimin", 4375, 9.8};
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n",s1.roll);
    printf("CGPA: %f\n",s1.cgpa);
    return 0;
}