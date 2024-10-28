// Pointer Arithmetic:
// Pointer can be incremented & decremented
// We can subtract one pointer from another
// We can compare two pointers

#include<stdio.h>

int main(){
    int age = 17, age1 = 18;
    int *ptr = &age, *ptr1 = &age1;

    printf("%d\n",*ptr); // It points to memory location of age
    ptr++;
    printf("%d\n",*ptr); // It points to next memory location after age (Which is not defined).

    ptr--;
    printf("Difference: %u\n",ptr - ptr1);

    ptr1 = &age;
    printf("Comparison: %d\n",ptr == ptr1);
    return 0;
}