// Pointers in function call.
/* Two types of Function call:
1. Call by value
2. Call by reference */

#include<stdio.h>

void sqr(int *ptr);

int main(){
    int num = 4;
    sqr(&num);
    printf("%d\n",num); // Value of num is also changed to 16.
    return 0;
}

void sqr(int *ptr){
    int sqr = (*ptr)*(*ptr);
    printf("Square of %d = %d\n",*ptr, sqr);
    *ptr = sqr;
}