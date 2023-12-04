/*
4. Write a function to read a matrix, transpose a matrix, multiply
two matrices and use these functions in main() to check whether
an input matrix is orthogonal or not.
*/

#include<stdio.h>

void mul(int *mat,int *trans,int M,int N){
    int res[M][M];
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            res[i][j]=0;
            for(int k=0;k<N;k++){
                res[i][j]+=*(mat+i*M+k)*(*(trans+k*N+j));
            }
        }
    }

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}

int *transpose(int (*mat),int M,int N){
    int * trans = (int*)malloc((M*N) * sizeof(int));
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            *(trans+j*M+i) = *(mat+i*N+j);
            printf("%d ",*(mat+i*N+j));
        }
        printf("\n");
    }
    return trans;
}



int main(){
    int m,n;
    // int *trans;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    //trans = 
    transpose(mat,m,n);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         printf("%d ",*(trans+i*n+j));
    //     }
    //     printf("\n");
    // }
    
    return 0;
}