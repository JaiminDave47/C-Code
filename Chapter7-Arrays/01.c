// Array is collection of similar datatypes stored at contigous memory locations.

#include<stdio.h>

int main(){
    int marks[3] = {97, 98, 95};
    
    for(int i = 0; i < 3; i++){
        printf("Marks %d: %d\n",i+1, marks[i]);
    }
    return 0;
}