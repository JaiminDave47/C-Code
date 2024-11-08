// fgetc(fptr) & fputc('A', fptr);

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    char ch;
    while(ch != EOF){
        ch = fgetc(fptr);
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}