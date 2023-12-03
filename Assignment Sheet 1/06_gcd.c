#include<stdio.h>
int euclid_gcd(int a, int b);
int fact_gcd(int a, int b);

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    int mini, maxi;
    mini = a < b ? a : b;
    maxi = a > b ? a : b;
    printf("The gcd using euclid algorithm is %d", euclid_gcd(mini, maxi));
    printf("\nThe gcd using factorization method is %d", fact_gcd(mini, maxi));

    return 0;
}

int euclid_gcd(int a, int b){
    if(b == 0)
        return a;
    while(1){
        int rem = a % b;
        if (rem == 0) // b itself will never be '0'. If b initially wasn't '0' then within the loop it will never be '0' as before that be will hold value 1 and any number is divisible by 1 so value 1 will be returned.
            return b;
        a = b;
        b = rem;
    }
}

int fact_gcd(int a, int b){
    if(b == 0)
        return a;
    int ans = 1;
    for(int i = 2; i<= a; i++){
        if (a % i == 0 && b%i == 0){
            ans *= i;
            a = a / i;
            b = b / i;
            i--;
        }
    }
    return ans;
}
