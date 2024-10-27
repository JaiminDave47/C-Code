// Write a program in C to print all the letters in english alphabet using a pointer.

#include<stdio.h>

int main(){
    char c1 = 'A', c2 = 'Z';
    char *ptr1 = &c1, *ptr2 = &c2;

    for(int i = (*ptr1); i <= (*ptr2); i++){
        printf("%c ",i);
    }
    return 0;
}