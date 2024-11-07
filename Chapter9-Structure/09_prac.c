// Create a structure to store Complex numbers. (Use arrow operator)

#include<stdio.h>

typedef struct complex{
    int real;
    int img;
} complex;

int main(){
    complex x;
    printf("Enter real part of the complex number: ");
    scanf("%d", &x.real);
    printf("Enter imaginary part of the complex number: ");
    scanf("%d", &x.img);
    complex *ptr = &x;

    printf("Complex number: %d + %di\n", ptr->real, ptr->img);
    return 0;
}