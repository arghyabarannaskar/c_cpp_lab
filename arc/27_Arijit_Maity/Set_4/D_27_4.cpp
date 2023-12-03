#include<bits/stdc++.h>
using namespace std;
class Pattern{
    public:
        void printPattern(){
            for(int i=0; i<11; i++){
                for(int j=0; j<i; j++){
                    cout<<" ";
                }
                for(int j=i; j<11-i; j++){
                    cout<<"*";
                }
                cout<<endl;
            }
        }
};
int main(){
    Pattern p;
    p.printPattern();
    return 0;
}
