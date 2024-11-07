// Passing structure to function

#include<stdio.h>

struct student{
    char name[50];
    int roll;
    float cgpa;
};

void printinfo(struct student s);

int main(){
    struct student s1 = {"Jaimin", 4375, 9.8};
    printinfo(s1);
    return 0;
}

void printinfo(struct student s){
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("CGPA: %f\n", s.cgpa);
}