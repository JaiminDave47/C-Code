// Take a sting input from user using %c

#include<stdio.h>
#include<string.h>

int main(){
    char name[20];
    char ch;
    int i = 0;

    printf("Enter your name: ");
    while(ch != '\n'){
        scanf("%c",&ch);
        name[i] = ch;
        i++;
    }
    name[i] = '\0';
    puts(name);
    return 0;
}