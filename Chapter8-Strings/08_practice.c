// Find the salted form of a password entered by user if the salt is '123'
// and added at the end.

#include<stdio.h>
#include<string.h>

void salting(char pass[]);

int main(){
    char pass[50];
    printf("Enter your password: ");
    scanf("%s",&pass);
    salting(pass);
    return 0;
}

void salting(char pass[]){
    char newpass[100];
    char salt[] = "123";
    strcpy(newpass, pass);
    strcat(newpass, salt);
    printf("Salted password: ");
    puts(newpass);
}