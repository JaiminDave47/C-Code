// Make a program that inputs user's name and print its length.

#include<stdio.h>

int main(){
    int length = 0;
    char name[50];
    printf("Enter a String: ");
    fgets(name, 50, stdin);
    for(int i = 0; name[i] != '\0'; i++){
        length++;
    }
    printf("Length of the string: %d\n",length-1);
    return 0;
}