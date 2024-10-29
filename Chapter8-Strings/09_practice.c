// Write a function named slice, which takes a string & returns
// a sliced string from index n to m.

#include<stdio.h>

void slice(char str[], int n, int m);

int main(){
    char name[20] = "Jaimin Dave";
    int n, m;
    printf("Enter starting index: ");
    scanf("%d",&n);
    printf("Enter ending index: ");
    scanf("%d",&m);
    slice(name, n, m);
    return 0;
}

void slice(char str[], int n, int m){
    char newstr[20];
    int j = 0;
    for(int i = n; i <= m; i++, j++){
        newstr[j] = str[i];
    }
    newstr [j] = '\0';
    printf("Sliced String: ");
    puts(newstr);
}