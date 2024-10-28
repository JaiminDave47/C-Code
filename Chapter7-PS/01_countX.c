// In an array of numbers, find how many times does a number 'x' occurs.

#include<stdio.h>

int main(){
    int n, x, count = 0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number whose occurances you wanna count: ");
    scanf("%d",&x);
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            count++;
        }
    }
    printf("Occurance(s) of %d in the array: %d\n",x, count);
    return 0;
}