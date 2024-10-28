// Write a program to insert an element at the end of an array.

#include<stdio.h>

int main(){
    int arr[100], n, element;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert at the end: ");
    scanf("%d",&element);

    arr[n] = element;
    n++;
    printf("Array after insertion: ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}