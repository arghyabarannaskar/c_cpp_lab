#include <iostream>
#include<cmath>
using namespace std;
class Triangle
{
    float a, b, c, s, area, perimeter;

public:
    void input()
    {
        cout << "Enter length of Three Sides" << endl;
        cin >> a >> b >> c;
    }
    void calculatePerimeter()
    {
        perimeter = a + b + c;
    }

    void calculateArea();
    void print();
};

void Triangle::calculateArea(){
    s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::print(){
    cout<<"Area of the Triangle : "<<area<<endl;
    cout << "Perimeter of the Triangle : " << perimeter << endl;
}

int main()
{
    Triangle t;
    t.input();
    t.calculatePerimeter();
    t.calculateArea();
    t.print();
    return 0;
}