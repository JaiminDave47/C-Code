// Create a string firstName & lastName to store details of 
// user & print all the characters using a loop

#include<stdio.h>

void printstr(char arr[]);

int main(){
    char firstName[10], lastName[10];
    printf("Enter your first name: ");
    fgets(firstName, 10, stdin);
    printf("Enter your last name: ");
    fgets(lastName, 10, stdin);

    printf("Your name:\n");
    printstr(firstName);
    printstr(lastName);
    return 0;
}

void printstr(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}