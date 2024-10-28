// Write a program to print largest number in an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("The largest number in the array: %d\n",largest);
    return 0;
}