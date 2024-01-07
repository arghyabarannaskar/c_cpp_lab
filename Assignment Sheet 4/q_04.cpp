#include<iostream>
using namespace std;

class Pattern{
private:
    int n;

public:
    void print()
    {
        cout << "Enter the number of lines: ";
        cin >> n;

        for (int i = 1; i<=n; i++){
            int space = i - 1;
            for (int j = 1; j <= space; j++)
                cout << " ";
            for (int k = 1; k < n * 2 -(space*2) ; k++)
                cout << "*";
            cout<<endl;
        }
    }
};
int main(){
    Pattern p;
    p.print();
    return 0;
}
