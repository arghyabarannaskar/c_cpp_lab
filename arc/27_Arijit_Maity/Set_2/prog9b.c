#include<stdio.h>
long gcd(long n1,long n2){
    if(n1%n2==0)  return n2;
    return gcd(n2,n1%n2);
}


int main(){
    long n1,n2;
    scanf("%ld %ld",&n1,&n2);
    printf("%ld",gcd(n1,n2));
    return 0;
}