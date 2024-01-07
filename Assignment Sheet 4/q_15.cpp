#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
        void set(int r, int i){
           real=r;
           img=i; 
        }
        void print(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        friend Complex add(Complex ob1, Complex ob2);
};
Complex add(Complex ob1, Complex ob2){
    Complex p;
    p.real=ob1.real+ob2.real;
    p.img=ob1.img+ob2.img;
    return p;
}
int main(){
    Complex cp1;
    cp1.set(2,3);
    cp1.print();
    Complex cp2;
    cp2.set(3,4);
    cp2.print();
    Complex cp3=add(cp1,cp2);
    cout<<"After Add Operation\n";
    cp3.print();
    return 0;
}