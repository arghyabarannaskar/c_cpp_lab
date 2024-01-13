#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    class AreaCalculator {
    public:
        double calculateArea(const Circle& circle) {
            double area = 3.14 * circle.radius * circle.radius;
            return area;
        }
    };

    void displayArea() const {
        AreaCalculator calculator;
        double area = calculator.calculateArea(*this);
        cout << "Area of the circle with radius " << radius << " is: " << area << endl;
    }
};

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius);

    circle.displayArea();

    return 0;
}
