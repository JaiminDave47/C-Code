// Write a program to allocate memory to store 5 prices.

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));

    for(int i = 0; i < 5; i++){
        printf("Enter price of %d: ", i+1);
        scanf("%f", &ptr[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("Price of %d: %f\n", i+1, ptr[i]);
    }
    return 0;
}