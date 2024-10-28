// Write a program in C to find the maximum number between two numbers using a pointer.

#include<stdio.h>

int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int *ptr1 = &a, *ptr2 = &b;
    if((*ptr1) > (*ptr2)){
        printf("%d is Maximum\n",(*ptr1));
    } else if ((*ptr2) > (*ptr1)){
        printf("%d is Maximum\n",(*ptr2));
    } else{
        printf("Both numbers are equal\n");
    }
    return 0;
}