// Write a function to count the number of odd numbers in an array.

#include<stdio.h>

int countOdd(int arr[], int n);

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Number of odd numbers in the array: %d",countOdd(arr, 5));
    return 0;
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}