#include<stdio.h>

// Structure is user-defined/Derived datatype.
struct student{
    char name[50];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    printf("Enter details of Student 1:\n");
    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter roll number: ");
    scanf("%d",&s1.roll);
    printf("Enter CGPA: ");
    scanf("%f",&s1.cgpa);

    printf("\nDetails of Student 1:\n");
    printf("Name: %s",s1.name);
    printf("Roll number: %d\n",s1.roll);
    printf("CGPA: %f\n",s1.cgpa);
    return 0;
}