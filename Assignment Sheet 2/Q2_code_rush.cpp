#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int f(int result, int count, int limit, int noOfNums){
    // cout<<result<<","<<count<<" ";
    if(count == noOfNums){
        if(result == 0) return 1;
        else return 0;
    }
    
    int tupleCount = 0;
    for(int i = 0; i<limit; i++){
        tupleCount += f((result&i), count+1, limit, noOfNums);
    }
    return tupleCount;
}

int main() {
	// Your code here
    int T, n, m;
    cin>>T;
    while(T--){
        cin>>n>>m;
        int limit = 1<<m;
        // vector<vector<int>> dp(n+1, vector<int>(INT_MAX, -1));
        cout<<f((~(1<<31)), 0, limit, n)<<" ";
    }

    
    return 0;
}
