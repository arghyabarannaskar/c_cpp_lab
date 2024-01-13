#include<iostream>
#include<vector>
using namespace std;

class rectangle{
    public:
        int length, breadth;
};

class Couple{
    public:
    int first, second;
    Couple(int f, int s){
        first = f;
        second = s;
    }
};

int main(){
    rectangle collection[5];
    vector<Couple> ans;

    for (int i = 0; i < 5; i++){
        cout << "Enter the length of rectangle " << i << ": ";
        cin >> collection[i].length;
        cout << "Enter the breadth of rectangle " << i << ": ";
        cin >> collection[i].breadth;
    }

    for (int i = 0; i < 5; i++){
        for(int j= i+1; j<5; j++){
            if(i == j)
                continue;
            
            if(collection[i].length == collection[j].length && collection[i].breadth == collection[j].breadth)
                ans.push_back(Couple(i, j));
        }
    }

    cout << "Rectangle whose length and breadth are equal are..." << endl;
    for(auto ele: ans){
        cout << "Rectangle " << ele.first << " and " << ele.second << endl;
    }

        return 0;
}