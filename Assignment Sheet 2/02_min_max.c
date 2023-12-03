#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[] = {3, 4, 11, 16, 15, -2, 23, 44, 5, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mini = INT_MAX, maxi = INT_MIN;

    for (int i = 0; i < size; i++){
        if(arr[i]<mini)
            mini = arr[i];
        if(arr[i]>maxi)
            maxi = arr[i];
    }

    printf("The maximum value is %d and the minimum value is %d", maxi, mini);

    return 0;
}