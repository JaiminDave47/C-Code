// Allocate memory to store first 5 odd numbers, then reallocate
// it to store first 6 even numbers.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));
    for(int i = 1, j = 0; i <= 10; i++){
        if(i % 2 != 0){
            ptr[j] = i;
            j++;
        }
    }
    printf("First 5 odd numbers: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");

    ptr = realloc(ptr, 6);
    for(int i = 1, j = 0; i <= 12; i++){
        if(i % 2 == 0){
            ptr[j] = i;
            j++;
        }
    }
    printf("First 6 even number: ");
    for(int i = 0; i < 6; i++){
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}