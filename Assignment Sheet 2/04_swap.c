#include<stdio.h>

void printArr(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
     int arr[] = {3, 4, 11, 16, 15, -2, 23, 44, 5, 19};
     int size = sizeof(arr) / sizeof(arr[0]);
     for (int i = 0; i < size; i+= 2){
        if(i == size-1)
            break;
         int temp = arr[i];
         arr[i] = arr[i + 1];
         arr[i + 1] = temp;
     }

     printArr(arr, size);

     return 0;
}