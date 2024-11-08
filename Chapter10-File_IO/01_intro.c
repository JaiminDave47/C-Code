// File - Container in a storage device to store data
// File Pointer -> FILE *fptr;
// File Open/Close

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    if(fptr == NULL){
        printf("File doesn't exist.\n");
    } else{
        fclose(fptr);
    }
    return 0;
}