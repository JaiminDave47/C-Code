// Write a program to calculate the sum, product and average of 2 numbers.
// Print those values in main function.

#include<stdio.h>

void spavg(int n1, int n2, int *sum, int *prod, float *avg);

int main(){
    int n1, n2, sum, prod;
    float avg;
    printf("Enter value of n1: ");
    scanf("%d",&n1);
    printf("Enter value of n2: ");
    scanf("%d",&n2);
    spavg(n1, n2, &sum, &prod, &avg);
    printf("Sum = %d\n",sum);
    printf("Product = %d\n",prod);
    printf("Average = %f\n",avg);
    return 0;
}

void spavg(int n1, int n2, int *sum, int *prod, float *avg){
    *sum = n1 + n2;
    *prod = n1 * n2;
    *avg = (*sum)/2.0;
}