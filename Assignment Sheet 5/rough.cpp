#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> stk;
    stk.push(34);
    stk.push(4);
    stk.push(3);

    stk = stack<int>();

    while(!stk.empty()) {
        int t = stk.top();
        cout << t << endl;
        stk.pop();
    }


    return 0;
}