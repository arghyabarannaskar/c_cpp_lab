#include<stdio.h>
int gcdFact(int, int);
int gcdEuclid(int, int);
void solve();
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
        {
            solve();
        }
    
    return 0;
}

//printf("Enter two numbers: ");
void solve()
 { 
     static int test=1;
     printf("\nTest case number %d\n",test++);
     int n1, n2;
    scanf("%d%d", &n1, &n2);
    if(n1 == 0 && n2 == 0) 
     {
        printf("Infinity\n");
        return;
     }
     printf("\nThe remainder list\n");
    int res = gcdEuclid(n1, n2);
    printf("\nThe GCD using Euclid Algorithm: %d\n", res);
    res = gcdFact(n1, n2);
    printf("The GCD using Factorization Method: %d\n", res);
 }

int gcdEuclid(int a, int b) {
    int rem = a % b;
    printf("\n%d  ",rem);
    if(rem == 0)
        return b;
    return gcdEuclid(b, rem);
}
int gcdFact(int a, int b) {
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    int min = a;
    if(b < a)
        min = b;
    int res = 1;
    for(int i = 2 ; i <= min ; i++) {
        if(a % i == 0 && b % i == 0) {
            printf("%d | %d, %d\n", i, a, b);
            a = a / i;
            b = b / i;
            res *= i;
            i--;
        }
    }
    printf("  | %d, %d\n", a, b);
    return res;
}