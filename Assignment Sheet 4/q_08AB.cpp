#include<iostream>
using namespace std;

class Circle{
    private:
        int radius;
        float x, y;
    public:
    Circle(){
        cout << "Default Constructor" << endl;
    }

    Circle(int rr, int xx, int yy){
        radius = rr;
        x = xx;
        y = yy;
        cout << "Parameterize constructor called" << endl;
    }

    Circle(Circle &c){
        cout << "Copy constructor called" << endl;
        radius = c.radius;
        x = c.x;
        y = c.y;
    }

    void showData(){
        cout << "Radius: " << radius << endl;
        cout << "X-Coordinate: " << x << endl;
        cout << "Y-Coordinate: " << y << endl
             << endl;
        ;
    }
};
int main(){
    //parameterized Constructor
    Circle c1(10, 2.5f, 2.5f);
    c1.showData();
    
    Circle c2 = c1;
    c2.showData();

    return 0;
}