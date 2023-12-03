#include<stdio.h>

int main(){
    int arr[] = {3, 4, 11, 16, 15, -2, 23, 44, 5, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;

    printf("Enter the number to be searched: ");
    scanf("%d", &num);
    int i = 0;
    for (i = 0; i < size; i++){
        if(arr[i] == num){
            printf("Found at index %d", i);
            break;
        }
    }

    if(i == size)
        printf("number is not found");

        return 0;
}