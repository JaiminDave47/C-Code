// Enter address (house no, block, city, state) of 5 people

#include<stdio.h>

typedef struct address{
    int hn;
    char block[50];
    char city[50];
    char state[50];
} add;

int main(){
    add address[5];
    
    for(int i = 0; i < 5; i++){
        printf("Enter address of person %d:\n", i+1);
        printf("Enter house number: ");
        scanf("%d",&address[i].hn);
        printf("Enter block name: ");
        getchar();
        fgets(address[i].block, sizeof(address[i].block), stdin);
        printf("Enter city: ");
        fgets(address[i].city, sizeof(address[i].city), stdin);
        printf("Enter state: ");
        fgets(address[i].state, sizeof(address[i].state), stdin);
    }

    for(int i = 0; i < 5; i++){
        printf("Address of person %d:\n", i+1);
        printf("%d - %s%s%s",address[i].hn, address[i].block, address[i].city, address[i].state);
        printf("\n");
    }
    return 0;
}