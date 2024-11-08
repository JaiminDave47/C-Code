// Reading data from a file.

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    char str[50];
    fscanf(fptr, "%s", &str);
    puts(str);
    fscanf(fptr, "%s", &str);
    puts(str);
    fscanf(fptr, "%s", &str);
    puts(str);
    fscanf(fptr, "%s", &str);
    puts(str);

    fclose(fptr);
    return 0;
}