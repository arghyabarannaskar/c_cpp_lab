#include<stdio.h>

int binarySearch(int rooms[], int size);
int sumTill(int);

int main(){
    int rooms[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(rooms) / sizeof(rooms[0]);
    int index = binarySearch(rooms, size);
    if(index == -1)
        printf("\nNo such \"X\" is possible in this sequence");
    else
        printf("\n\"X\" = %d", rooms[index]);

    return 0;
}

int sumTill(int n){
    return (n * (n + 1)) / 2;
}

int binarySearch(int rooms[], int size){
    int low = 0, high = size - 1, mid;
    while(low<=high){
        mid = low + (high - low) / 2;
        int left = sumTill(rooms[mid - 1]);
        int right = sumTill(size) - sumTill(rooms[mid]);
        if(left == right)
            return mid;
        else if(left < right)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}