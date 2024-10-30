// Check if given character is present in a string or not.

#include<stdio.h>

int checkfor(char str[], char ch);

int main(){
    char str[100];
    char ch;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter a character you wanna check for: ");
    scanf("%c",&ch);
    if(checkfor(str, ch)){
        printf("\"%c\" is present in the string", ch);
    } else{
        printf("\"%c\" is not present in the string", ch);
    }
    return 0;
}

int checkfor(char str[], char ch){
    int result = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            result = 1;
            break;
        }
    }
    return result;
}