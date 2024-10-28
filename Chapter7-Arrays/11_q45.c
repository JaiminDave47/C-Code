// Write a program to store the first n fibonacci numbers.

#include<stdio.h>

int main(){
    int n;
    printf("Enter number of terms in fibonacci series(n > 2): ");
    scanf("%d",&n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    for(int i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("First n terms of fibonacci series: ");
    for(int i = 0; i < n; i++){
        printf("%d ",fib[i]);
    }
    return 0;
}