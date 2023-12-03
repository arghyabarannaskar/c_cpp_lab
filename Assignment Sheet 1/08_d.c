#include<stdio.h>
#include<math.h>

double factorial(int num);

int main(){
    double x;
    printf("Enter the value of x( |x| < 1 ): ");
    scanf("%lf", &x);
    int count, sign = 1, term = 1;
    double result = 0;
    
    for (count = 1; count <= 10; count++){
        result += sign * (pow(x, count) / count);
        // term++;
        sign *= -1;
    }

    printf("The value of log(1+%lf) is: %lf", x, result);

    return 0;
}

double factorial(int num){
    double fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }

    return fact;
}