#include<iostream>
using namespace std;

int main(){
    // int arr[500];
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 2, 0, 3};
    int multi = 29;

    int carry = 0;
    for (int i = 9; i >= 0; i--){
        int res = arr[i] * multi + carry;
        int rem = res % 10;
        arr[i] = rem;
        carry = res / 10;
    }

    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
        
    }

        return 0;
}