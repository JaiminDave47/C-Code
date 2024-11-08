/* Create a system that can store information of all students, teachers & staff of your college
in the form of structures. */

#include<stdio.h>

typedef struct student{
    char branch[50];
    int roll;
    char name[50];
} stu;

typedef struct teacher{
    char subject[50];
    char name[20];
} faculty;

typedef struct staff{
    char name[50];
    char duty[50];
} staff;

void getinfo_student(stu s[], int i);
void getinfo_faculty(faculty f[], int j);
void getinfo_staff(staff st[], int k);

int main(){
    int i = 0, j = 0, k = 0, dm;
    stu s[100];
    faculty f[100];
    staff st[100];

    for(int x = 0; ; x++){
        printf("Enter 1 for entering student's details.\n");
        printf("Enter 2 for entering faculty's details.\n");
        printf("Enter 3 for entering staff's details.\n");
        printf("Enter a number: ");
        scanf("%d", &dm);
        printf("\n");

        if(dm == 1){
            getinfo_student(s, i);
            i++;
        } else if(dm == 2){
            getinfo_faculty(f, j);
            j++;
        } else if(dm == 3){
            getinfo_staff(st, k);
            k++;
        } else{
            printf("Enter a valid number.\n");
        }
        printf("\n");
        printf("Enter 1 to exit.\n");
        printf("Enter 2 to add more details.\n");
        printf("Enter a number: ");
        scanf("%d", &dm);
        if(dm == 1){
            break;
        } else if(dm == 2){
            printf("\n");
            continue;
        }
    }
    return 0;
}

void getinfo_student(stu s[], int i){
    printf("Enter branch: ");
    while (getchar() != '\n');
    fgets(s[i].branch, sizeof(s[i].branch), stdin);
    printf("Enter roll number: ");
    scanf("%d", &s[i].roll);
    printf("Enter name: ");
    while (getchar() != '\n');
    fgets(s[i].name, sizeof(s[i].name), stdin);
}

void getinfo_faculty(faculty f[], int j){
    printf("Enter subject: ");
    while (getchar() != '\n');
    fgets(f[j].subject, sizeof(f[j].subject), stdin);
    printf("Enter name: ");
    fgets(f[j].name, sizeof(f[j].name), stdin);
}

void getinfo_staff(staff st[], int k){
    printf("Enter name: ");
    while (getchar() != '\n');
    fgets(st[k].name, sizeof(st[k].name), stdin);
    printf("Enter duty: ");
    fgets(st[k].duty, sizeof(st[k].duty), stdin);
}