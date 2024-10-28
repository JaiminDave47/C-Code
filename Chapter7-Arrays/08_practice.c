// Store and print marks of two students in three subjects.

#include<stdio.h>

int main(){
    int marks[2][3];
    for(int i = 0; i < 2; i++){
        printf("Enter marks of student %d:\n",i+1);
        for(int j = 0; j < 3; j++){
            printf("Subject %d: ", j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < 2; i++){
        printf("Marks of student %d:\n",i+1);
        for(int j = 0; j < 3; j++){
            printf("Subject %d: %d\n", j+1, marks[i][j]);
        }
    }
    return 0;
}