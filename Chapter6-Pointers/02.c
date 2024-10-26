// Declaring Pointers & Format specifier (%p or %u)

#include<stdio.h>

int main(){
    int age = 17;
    int *ptr1 = &age;

    char star = '*';
    char *ptr2 = &star;

    float price = 125.45;
    float *ptr3 = &price;

    // Understanding syntax

    printf("%p",&age); // Prints 'addredd of' variable 'age'
    printf("%p",ptr1); // Prints 'address of' variable 'age' which is stored in pointer 'ptr'
    printf("%p",&ptr1); // Prints 'address of' pointer 'ptr'
    return 0;
}