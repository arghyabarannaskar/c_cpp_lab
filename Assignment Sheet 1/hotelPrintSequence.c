#include<stdio.h>
#include<stdlib.h>

int binarySearch(int size);
long long sumTill(long long);

int main(){
    int *rooms;
    int size = 1;
    while(size<INT_MAX){
        int index = binarySearch(size);
        if(index != -1){
            printf("\n%d %d", size, index);
        }
        size++;
    }

    return 0;
}

long long sumTill(long long n){
    return (n * (n + 1)) / 2;
}

int binarySearch(int size){
    int low = 1, high = size, mid;
    while(low<=high){
        mid = low + (high-low) / 2;
        long long left = sumTill(mid-1);
        long long right = sumTill(size) - sumTill(mid);
        if(left == right)
            return mid;
        else if(left < right)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}