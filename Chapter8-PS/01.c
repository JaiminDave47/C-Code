// Write a program to convert all lowercase vowels to uppercase vowels

#include<stdio.h>

void toUpper(char *str);

int main(){
    char str[] = "hello everyone";
    toUpper(str);
    puts(str);
}

void toUpper(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a'){
            str[i] = 'A';
        } else if(str[i] == 'e'){
            str[i] = 'E';
        } else if(str[i] == 'i'){
            str[i] = 'I';
        } else if(str[i] == 'o'){
            str[i] = 'O';
        } else if(str[i] == 'u'){
            str[i] = 'U';
        }
    }
}