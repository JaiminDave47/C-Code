// Make a program to input student information from a user &
// Enter it to a file.

#include<stdio.h>

typedef struct student{
    char name[50];
    int roll;
    float cgpa;
} stu;

int main(){
    FILE *fptr;
    stu s;
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    fptr = fopen("student.txt", "a");
    fprintf(fptr, "Name: %s", s.name);
    fprintf(fptr, "Roll number: %d\n", s.roll);
    fprintf(fptr, "CGPA: %f\n\n", s.cgpa);
    fclose(fptr);
    return 0;
}