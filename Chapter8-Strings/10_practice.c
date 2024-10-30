// Write a function to count occurances of vowels in a string

#include<stdio.h>

int countVowels(char str[]);

int main(){
    char name[20] = "Jaimin Dave";
    int vowels = countVowels(name);
    printf("Number of vowels in %s: %d\n",name, vowels);
    return 0;
}

int countVowels(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'\
        || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}