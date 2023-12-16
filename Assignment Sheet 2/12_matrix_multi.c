#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print2D(int (*arr)[3], int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++ ){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int arr[3][3] = {
        {4, 2, 9},
        {4, 5, 6},
        {2, 3, 5}};
    

    int arr2[3][3] = {
        {7, 3, -5},
        {1, -1, 2},
        {11, 9, -12}};

    int result[3][3];
    memset(result, 0, (3 * 3) * sizeof(int));

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                result[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    printf("\n\nThe multiplication of the 2 matrices: \n");
    print2D(result, 3, 3);

    return 0;
}