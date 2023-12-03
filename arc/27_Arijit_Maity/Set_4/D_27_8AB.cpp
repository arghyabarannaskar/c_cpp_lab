#include<bits/stdc++.h>
using namespace std;

class Demonstrate{
    private:
        int x;
        int y;
    public:
        //copy Constructor
        Demonstrate(const Demonstrate &ob){
            x=ob.x;
            y=ob.y;
            cout<<"Copy Constructor"<<endl;
            cout<<x<<" "<<y<<endl;
        }

        //Parameterized Constructor
        Demonstrate(int x, int y)
        {
            this->x = x;
            this->y = y;
            cout << "Parameterized Constructor"<<endl;
            cout<<x<<" "<<y<<endl;
        }
        

};
int main(){
    //parameterized Constructor
    Demonstrate* ob1=new Demonstrate(4,5);

    // copy constructor
    Demonstrate ob2=*ob1;

    return 0;
}