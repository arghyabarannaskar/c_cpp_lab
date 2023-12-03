#include<stdio.h>


int main(){
    int i = 1;
    int fact = 1;
    double result = 0;
    while(i<=10){
        fact *= i;
        result += ((double)i / fact);
        i++;
    }

    printf("Computation result: %lf", result);

    return 0;
}
