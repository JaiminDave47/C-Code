// Write a function to reverse an array.

#include<stdio.h>

void reverse(int arr[], int n);

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array before reverse: ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    reverse(arr, n);
    printf("Reversed array: ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void reverse(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}