// String is a character array terminated by '\0' (null character)

#include<stdio.h>
#include<string.h>

int main(){
    // char name[] = {'J', 'A', 'I', 'M', 'I', 'N', '\0'};
    // char name[] = "JAIMIN";
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    puts(name);
    return 0;
}