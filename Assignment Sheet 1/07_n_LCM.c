#include<stdio.h>

int n_lcm(int arr[], int size);

int gcd(int a, int b){
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

int lcm(int a, int b){
    int maxi = (a>b)? a: b;
    int mini = (a< b)?a:b;
    
    return (a*b)/gcd(maxi, mini);
}

int main(){
    int arr[] = {5, 6, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The LCM is %d", n_lcm(arr, size));

    return 0;
}

int n_lcm(int arr[], int size){
    int ans = arr[0];
    for (int i = 1; i < size; i++){
        ans = lcm(ans, arr[i]);
    }
    return ans;
}