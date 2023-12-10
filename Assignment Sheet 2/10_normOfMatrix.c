#include<stdio.h>
#include<math.h>

int main(){
    // int m[][3] = {
    //     {2, 65, 8},
    //     {45, 3, 22},
    //     {3, 56, 73}};
    int m[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};


    int row = sizeof(m)/(4*sizeof(int));

    int sqrSum = 0;
    for (int i = 0; i < row; i++){
        for(int j = 0; j<4; j++){
            sqrSum += m[i][j]* m[i][j];
        }
    }
    // for (int i = 0; i < row; i++){
    //     for(int j = 0; j<3; j++){
    //         sqrSum += m[i][j]* m[i][j];
    //     }
    // }

    double norm = sqrt(sqrSum);
    printf("The norm of the matrix is %lf", norm);

    return 0;
}