#include<stdio.h>

long fib(long n){
    if(n<=1)    return n;
    return fib(n-1)+fib(n-2);
}


int main(){
    long n;
    scanf("%ld",&n);
    printf("%ld",fib(n));
    return 0;
}