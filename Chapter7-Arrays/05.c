// Arrray is a Pointer

#include<stdio.h>

int main(){
    int arr[5] = {31, 32, 33, 34, 35};
    int *ptr = arr;
    for(int i = 0; i < 5; i++){
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}