// Arrays as Function argument

#include<stdio.h>

void printNum(int arr[], int n);

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printNum(arr, 5);
    return 0;
}

void printNum(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}