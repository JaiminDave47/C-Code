// String using pointers

#include<stdio.h>

int main(){
    char *str = "Hello World"; // Can be reinitialized
    char str1[] = "Hello World"; // Can not be reinitialized

    str = "Hello";
    puts(str);
    return 0;
}