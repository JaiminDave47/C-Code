// Write a program to allocate memory of size n, where n is entered by the user.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        printf("%d ", ptr[i]);
    }
    return 0;
}