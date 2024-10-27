// Pointer to Pointer
// A variable that stores the memory address of another pointer

#include<stdio.h>

int main(){
    int age = 17;
    int *ptr = &age;
    int **pptr = &ptr;

    printf("%d\n",*ptr); // Prints the value at address stored in 'ptr' (Basically it prints 'age').
    printf("%u\n",ptr); // Prints address of age
    printf("%u\n",pptr); // Prints address of ptr 
    return 0;
}