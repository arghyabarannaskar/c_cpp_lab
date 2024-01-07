#include <iostream>
using namespace std;

inline int square(int x){
    return x * x;
}

int main(){
    int x;
    cout << "Enter the number : ";
    cin >> x;
    cout << "Square of the number: " << square(x) << endl;
    return 0;
}