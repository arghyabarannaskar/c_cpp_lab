#include<stdio.h>
#include<stdlib.h>
void union_list(int arr1[], int size1, int arr2[], int size2, int *newArr);

int main(){
    int arr1[] = {4, 7, 8, 24, 56, 67};
    int arr2[] = {2, 4, 5, 6, 8, 9, 13, 17, 28, 33, 44};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int *newArr = (int *)malloc((size1 + size2) * sizeof(int));

    union_list(arr1, size1, arr2, size2, newArr);
    for (int i = 0; i < (size1 + size2); i++){
        printf("%d, ", newArr[i]);
    }

        return 0;
}

void union_list(int arr1[], int size1, int arr2[], int size2, int *newArr){
    int idx = 0, i = 0, j = 0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            newArr[idx++] = arr1[i++];
        }else{
            newArr[idx++] = arr2[j++];
        }
    }

    while( i<size1){
        newArr[idx++] = arr1[i++];
    }

    while(j<size2){
        newArr[idx++] = arr2[j++];
    }
}