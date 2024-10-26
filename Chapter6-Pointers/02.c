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

    printf("%p\n",&age); // Prints 'address of' variable 'age'
    printf("%p\n",ptr1); // Prints 'address of' variable 'age' which is stored in pointer 'ptr'
    printf("%p\n",&ptr1); // Prints 'address of' pointer 'ptr'

    // Each following line will give same output
    printf("%d\n",age);
    printf("%d\n",*ptr1);
    printf("%d\n",*(&age));
    return 0;
}