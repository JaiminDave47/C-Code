// Array of Structure

#include<stdio.h>

struct student{
    char name[50];
    int roll;
    float cgpa;
};

int main(){
    struct student AIDS[2];
    for(int i = 0; i < 2; i++){
        printf("Enter details of student %d:\n",i+1);
        printf("Enter name: ");
        if(i > 0){
            getchar();
        }
        fgets(AIDS[i].name, sizeof(AIDS[i].name), stdin);
        printf("Enter roll number: ");
        scanf("%d",&AIDS[i].roll);
        printf("Enter CGPA: ");
        scanf("%f",&AIDS[i].cgpa);
        printf("\n");
    }

    for(int i = 0; i < 2; i++){
        printf("Details of Student %d:\n",i+1);
        printf("Name: %s",AIDS[i].name);
        printf("Roll number: %d\n",AIDS[i].roll);
        printf("CGPA: %f\n",AIDS[i].cgpa);
        printf("\n");
    }
    return 0;
}