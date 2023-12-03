#include<stdio.h>
#include<math.h>

double factorial(int num);

int main(){
    double degree, radian;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &degree);
    radian = degree * (3.1415 / 180);
    int count = 2, sign = 1, term = 2;
    double result = 1;
    
    for (count = 2; term <= 10; count+= 2){
        sign *= -1;
        result += sign * (pow(radian, count) / factorial(count));
        term++;
    }

    printf("The value of cos(%d) is: %lf", (int)degree, result);

    return 0;
}

double factorial(int num){
    double fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }

    return fact;
}