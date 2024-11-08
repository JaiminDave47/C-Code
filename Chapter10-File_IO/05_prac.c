// Write a program to read 5 integers from a file.

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("integers.txt", "r");
    int n;
    for(int i = 1; i <= 5; i++){
        fscanf(fptr, "%d", &n);
        printf("%d ", n);
    }
    fclose(fptr);
    return 0;
}