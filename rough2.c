#include<stdio.h>
#include<stdlib.h>

int main(){

    int *arr, *arr2, *isDupli;
    int dupliCount = 0, n;

    printf("How many numbers? -> ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    isDupli = (int *)calloc(n , sizeof(int));

    for (int i = 0; i < n; i++){
        printf("Enter the %dth value: ", i);
        scanf("%d", &arr[i]);
        isDupli[i]++; // 0 -> not entered yet, 1 -> single value present, 2-> Duplicate value present
    }

        return 0;
}