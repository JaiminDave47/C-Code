// Write a program to enter price of 3 items & print their final cost with gst.

#include<stdio.h>

int main(){
    int price[3];
    // Input price of 3 items
    for(int i = 0; i <= 2; i++){
        printf("Enter price of item %d: ",i+1);
        scanf("%d",&price[i]);
    }
    printf("\n");
    // Print final cost with GST
    for(int i = 0; i <= 2; i++){
        printf("Final price of item %d: %f\n",i+1, price[i]*1.18);
    }
    return 0;
}