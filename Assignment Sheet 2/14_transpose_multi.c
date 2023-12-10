#include<stdio.h>
#include<stdlib.h>

void print2D(int ** arr, int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++ ){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("\nEnter the number of cols: ");
    scanf("%d", &col);
    int **arr = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++){
        arr[i] = (int *)malloc(col * sizeof(int));
        for (int j = 0; j < col; j++){
            printf("Enter the (%d, %d)th element: ", i, j);
            scanf("%d", *(arr + i) + j);
        }
    }

    int **transpose = (int **)malloc(col * sizeof(int *));
    for (int i = 0; i < col; i++){
        transpose[i] = (int *)malloc(row * sizeof(int));
        for (int j = 0; j < row; j++){
            transpose[i][j] = arr[j][i];
        }
    }

    printf("\n\n\n");
    printf("Original Matrix: \n");
    print2D(arr, row, col);
    printf("\n\nTranspose: \n");
    print2D(transpose, col, row);

    int **multi = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++){
        multi[i] = (int *)malloc(row * sizeof(int));
    }

    for(int i = 0; i<row; i++){
        for (int j = 0; j < row; j++){
            int sum = 0;
            for (int k = 0; k<col; k++){
                sum += arr[i][k] * transpose[k][j];
            }
            multi[i][j] = sum;
        }
    }

    printf("\n\nMultiplication: \n");
    print2D(multi, row, row);


    return 0;
}