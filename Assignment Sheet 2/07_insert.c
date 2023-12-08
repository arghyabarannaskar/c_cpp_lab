#include<stdio.h>
#include<stdlib.h>

void printArr(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int comparator(const void *x, const void *y){
    return *((int *)x) - *((int *)y);
}

int main(){
    int arr[] = {3, 4, 11, 16, 15, -2, 23, 44, 5, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, size, sizeof(int), comparator);
    printArr(arr, size);
    int i = size - 1 - 1, num;
    printf("\nEnter the number to insert: ");
    scanf("%d", &num);
    while(i>0 && arr[i]>num){
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = num;

    printf("\nAfter sorting: ");
    printArr(arr, size);

    return 0;
}