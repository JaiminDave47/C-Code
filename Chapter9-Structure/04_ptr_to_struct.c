// Pointer to Structures & Arrow Operator

#include<stdio.h>

struct student{
    char name[50];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"Jaimin", 4375, 9.8};
    struct student *ptr;
    ptr = &s1;

    // printf("Name: %s\n",(*ptr).name);
    // printf("Roll number: %d\n",(*ptr).roll);
    // printf("CGPA: %f\n",(*ptr).cgpa);

    printf("Name: %s\n", ptr->name);
    printf("Roll number: %d\n", ptr->roll);
    printf("CGPA: %f\n", ptr->cgpa);
    return 0;
}