// Library functions

#include<stdio.h>
#include<string.h>

int main(){
    // 1. strlen
    char name[20] = "Jaimin";
    int len = strlen(name);
    printf("Length of name: %d\n",len);

    // 2. strcpy(strNew, strOld)
    char name1[20];
    strcpy(name1, name);
    puts(name);

    // 3. strcat(firstStr, secondStr)
    char lastname[20] = " Dave";
    strcat(name, lastname);
    puts(name);

    // 4. strcmp(str1, str2) Compares two strings
    // 0 -> Strings are equal
    // Positive -> first > second (ASCII)
    // Negative -> first < second (ASCII)
    printf("Comparison of name & name1: %d\n",strcmp(name, name1));
    return 0;
}