// Write a program to write all the odd numbers from 1 to n in a file.

#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    FILE *fptr;
    fptr = fopen("oddnums.txt", "a");
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            fprintf(fptr, "%d ", i);
        }
    }
    fclose(fptr);
    return 0;
}