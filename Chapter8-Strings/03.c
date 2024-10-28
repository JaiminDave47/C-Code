// Format specifier

#include<stdio.h>

int main(){
    char name[20];
    printf("Enter your name: ");
    // scanf("%s",name); // %s takes input only till ' ' (Space);
    // So we use gets/fgets

    // fgets is more convenient (Stops when n-1 characters input or new line is entered)
    fgets(name, 20, stdin);
    puts(name);
    return 0;
}