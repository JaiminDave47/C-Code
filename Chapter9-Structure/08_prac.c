// Create a structure to store vectors. Then make a function to return sum of 2 vectors.

#include<stdio.h>

typedef struct vector{
    float x, y, z;
} vector;

void sumofvectors(vector a[], int n);

int main(){
    int n;
    printf("Enter number of vectors you wanna add: ");
    scanf("%d",&n);
    vector a[n];

    for(int i = 0; i < n; i++){
        printf("Enter components of vector %d:\n", i+1);
        printf("Enter X-Component: ");
        scanf("%f", &a[i].x);
        printf("Enter Y-Component: ");
        scanf("%f", &a[i].y);
        printf("Enter Z-Component: ");
        scanf("%f", &a[i].z);
        printf("\n");
    }
    sumofvectors(a, n);
    return 0;
}

void sumofvectors(vector a[], int n){
    vector add = {0, 0, 0};
    for(int i = 0; i < n; i++){
        add.x += a[i].x;
        add.y += a[i].y;
        add.z += a[i].z;
    }
    printf("Addition of %d vectors:\n", n);
    printf("%.2f i + %.2f j + %.2f k\n", add.x, add.y, add.z);
}