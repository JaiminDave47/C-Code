// free()
// We use it to free memory that is allocated using malloc & calloc.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    free(ptr);

    ptr = (int*) calloc(2, sizeof(int));
    free(ptr);
    return 0;
}