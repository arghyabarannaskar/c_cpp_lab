#include<stdio.h>
#include<math.h>

int main(){
    int number, length = 0, n, arm = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &number);
    n = number;

    while(n>0){
        length++;
        n = n / 10;
    }

    n = number;

    while(n>0){
        rem = n % 10;
        arm += pow(rem, length);
        n = n / 10;
    }

    if(arm == number)
        printf("The number is an Armstrong number.");
    else
        printf("The number is not an Armstrong number.");

    return 0;
}