#include <iostream>
#include <cmath>
#define PI 3.1415

using namespace std;

class Shape {
protected:
    string shapeName;

public:
    Shape(const string& name) : shapeName(name) {}

    virtual void display() const {
        cout << "Shape: " << shapeName << endl;
    }

    virtual double area() const {
        return 0.0;
    }

    virtual ~Shape() {
        cout << "Shape Destructor" << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}

    void display() const override {
        Shape::display();
        cout << "Radius: " << radius << endl;
    }

    double area() const override {
        return PI * radius * radius;
    }

    ~Circle() override {
        cout << "Circle Destructor" << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}

    void display() const override {
        Shape::display();
        cout << "Length: " << length << "\tWidth: " << width << endl;
    }

    double area() const override {
        return length * width;
    }

    ~Rectangle() override {
        cout << "Rectangle Destructor" << endl;
    }
};

class Trapezoid : public Shape {
private:
    double base1;
    double base2;
    double height;

public:
    Trapezoid(double b1, double b2, double h) : Shape("Trapezoid"), base1(b1), base2(b2), height(h) {}

    void display() const override {
        Shape::display();
        cout << "Base1: " << base1 << "\tBase2: " << base2 << "\tHeight: " << height << endl;
    }

    double area() const override {
        return 0.5 * (base1 + base2) * height;
    }

    ~Trapezoid() override {
        cout << "Trapezoid Destructor" << endl;
    }
};

int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Trapezoid(3.0, 7.0, 5.0);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << "------------------------" << endl;
    }

    // Deleting objects through pointers to the base class
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}
