#include <iostream>

using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    Calculator(double a, double b) : num1(a), num2(b) {}

    class Addition {
    public:
        double performOperation(double a, double b) {
            return a + b;
        }
    };

    class Subtraction {
    public:
        double performOperation(double a, double b) {
            return a - b;
        }
    };

    class Multiplication {
    public:
        double performOperation(double a, double b) {
            return a * b;
        }
    };

    class Division {
    public:
        double performOperation(double a, double b) {
            if (b != 0) {
                return a / b;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 0.0;
            }
        }
    };

    void displayMenu() {
        cout << "Calculator Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
    }

    void performCalculation(int choice) {
        double result;
        switch (choice) {
            case 1: {
                Addition add;
                result = add.performOperation(num1, num2);
                cout << "Result: " << result << endl;
                break;
            }
            case 2: {
                Subtraction sub;
                result = sub.performOperation(num1, num2);
                cout << "Result: " << result << endl;
                break;
            }
            case 3: {
                Multiplication mul;
                result = mul.performOperation(num1, num2);
                cout << "Result: " << result << endl;
                break;
            }
            case 4: {
                Division div;
                result = div.performOperation(num1, num2);
                cout << "Result: " << result << endl;
                break;
            }
            case 5:
                cout << "Exiting the calculator program." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    }
};

int main() {
    double num1, num2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Calculator calculator(num1, num2);

    do {
        calculator.displayMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice != 5) {
            calculator.performCalculation(choice);
        }

    } while (choice != 5);

    return 0;
}
