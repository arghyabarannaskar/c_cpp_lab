#include<stdio.h>
#include<math.h>

int main(){
    int m[][3] = {
        {2, 65, 8},
        {45, 3, 22},
        {3, 56, 73}};

    int row = sizeof(m)/(3*sizeof(int));

    int sqrSum = 0;
    for (int i = 0; i < row; i++){
        for(int j = 0; j<3; j++){
            sqrSum += m[i][j]* m[i][j];
        }
    }

    double norm = sqrt(sqrSum);
    printf("The norm of the matrix is %lf", norm);

    return 0;
}