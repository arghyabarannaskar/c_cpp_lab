#include <iostream>

using namespace std;

class Shape {
public:
    void printShape() {
        cout << "This is a shape." << endl;
    }
};

class Polygon : public Shape {
public:
    void printShape() {
        cout << "Polygon is a shape." << endl;
    }
};

class Rectangle : public Polygon {
public:
    void printShape() {
        cout << "Rectangle is a polygon." << endl;
    }
};

class Triangle : public Polygon {
public:
    void printShape() {
        cout << "Triangle is a polygon." << endl;
    }
};

class Square : public Rectangle {
public:
    void printShape() {
        cout << "Square is a rectangle." << endl;
    }
};

int main() {
    Shape shapeObj;
    Polygon polygonObj;
    Rectangle rectangleObj;
    Triangle triangleObj;
    Square squareObj;

    cout << "Calling function using the object of Shape class:" << endl;
    shapeObj.printShape();
    cout << "------------------------" << endl;

    cout << "Calling function using the object of Polygon class:" << endl;
    polygonObj.printShape();
    cout << "------------------------" << endl;

    cout << "Calling function using the object of Rectangle class:" << endl;
    rectangleObj.printShape();
    cout << "------------------------" << endl;

    cout << "Calling function using the object of Triangle class:" << endl;
    triangleObj.printShape();
    cout << "------------------------" << endl;

    cout << "Calling function using the object of Square class:" << endl;
    squareObj.printShape();
    cout << "------------------------" << endl;

    return 0;
}
