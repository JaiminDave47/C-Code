// Writing data in the file.

#include<stdio.h>

int main(){
    char ch = 'A';
    FILE *fptr;
    fptr = fopen("test.txt", "a");
    fprintf(fptr, "\n%c", ch);
    fclose(fptr);
    return 0;
}