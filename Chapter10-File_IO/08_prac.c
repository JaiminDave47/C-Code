// 2 numbers - a & b, are written in a file. Write a program to replace
// them with their sum.

#include<stdio.h>

int main(){
    int n, sum = 0;
    FILE *fptr, *fptrs;
    fptr = fopen("sum.txt", "r");
    fscanf(fptr, "%d", &n);
    sum += n;
    fscanf(fptr, "%d", &n);
    sum += n;
    fclose(fptr);

    fptrs = fopen("sum.txt", "w");
    fprintf(fptrs, "%d", sum);
    fclose(fptrs);
    return 0;
}