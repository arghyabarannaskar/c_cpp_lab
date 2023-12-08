#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void generate_matrix(float **, int);
void print_matrix(float **, int);
void matrix_expo(float **, int, int);

int main(){
    int n, m, p;
    printf("Enter the dimension: ");
    scanf("%d", &n);
    float **arr = (float **)malloc(n * sizeof(float *));
    for (int i = 0; i<n; i++){
        arr[i] = (float *)malloc(n * sizeof(float));
    }

    printf("\nEnter the value of p: ");
    scanf("%d", &p);

    generate_matrix(arr, n);
    print_matrix(arr, n);

    return 0;
}

void generate_matrix(float **arr, int n){
    srand(time(NULL));
    float rowsum = 0;
    for (int i = 0; i<n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = (rand() % 200) - 100;
            rowsum += arr[i][j];
        }

        for (int j = 0; j<n; j++){
            arr[i][j] = arr[i][j] / rowsum;
        }
    }
}

void print_matrix(float **arr, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
}

void matrix_expo(float **arr, int n, int p){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                
            }
        }
    }
}