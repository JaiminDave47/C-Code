// Make a structure to store Bank Account information of a customer of ABC Bank.
// Also, make an alias for it.

#include<stdio.h>

typedef struct customer{
    char name[100];
    char accnum[18];
} accholder;

int main(){
    accholder c1 = {"Jaimin Kishorbhai Dave", "1596545875432145"};
    printf("Name: %s\n", c1.name);
    printf("Account number: %s\n", c1.accnum);
    return 0;
}