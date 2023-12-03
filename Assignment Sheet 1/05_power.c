#include<stdio.h>

double power(double, double);

int main(){
    double number, exp;
    printf("Enter a number: ");
    scanf("%lf", &number);
    printf("Enter the exponent: ");
    scanf("%lf", &exp);
    printf("%lf^%lf = %lf", number, exp, power(number, exp));

    return 0;
}

double power(double num, double p){
    double res = 1;
    for (int i = 1; i <= p; i++){
        printf("%lf\n", num);
        res *= num;
    }
    return res;
}