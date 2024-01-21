#include<iostream>
using namespace std;

int* createInt() {
    int value = 42;
    return &value; // Returning address of a local variable.
}

int main(){
    int* ptr = createInt();

    return 0;
}
// Now, ptr is a dangling pointer.

