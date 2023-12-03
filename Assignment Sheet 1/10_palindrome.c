#include<stdio.h>
int palindrome(int num){
    int n = num, rev = 0;
    while(n>0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("The reverse of the number is %d\n", rev);
    return (num == rev);
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(palindrome(number))
        printf("The number is a palindrome number");
    else
        printf("The number is not a palindrome number");

    return 0;
}