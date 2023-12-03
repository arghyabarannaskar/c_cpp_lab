#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int nth_fib = ((1 / sqrt(5)) * pow((1 + sqrt(5)) / 2, n)) - ((1 / sqrt(5)) * pow((1 - sqrt(5)) / 2, n));
    printf("nth fibonacci number using formula is %d\n", nth_fib);

    int first_term = 0, second_term = 1, new_term;
    int i = 3;
    while(i<=n){
        new_term = first_term + second_term;
        first_term = second_term;
        second_term = new_term;
        i++;
    }
    printf("nth fibonacci number without using formula is %d\n", new_term);
    if(nth_fib != new_term)
        printf("both are different as we are considering 0 as first term while not using formula. And it can be observed that nth term using formula and (n+1)th term without using formula are same");

    return 0;
}