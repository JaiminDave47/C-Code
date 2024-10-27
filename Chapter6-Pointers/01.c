#include<stdio.h>

int main(){
    int age = 17;
    int *ptr = &age; // * Value at address, & Address of operator
    int _age = *ptr;
    printf("%d",_age);
    return 0;
}