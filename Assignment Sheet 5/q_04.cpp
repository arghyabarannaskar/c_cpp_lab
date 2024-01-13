#include<iostream>
using namespace std;

class Numbers {
private:
    int num1, num2, num3;

public:
    Numbers(int a, int b, int c) : num1(a), num2(b), num3(c) {}

    class GreatestFinder {
    public:
        int *greatest;
        GreatestFinder(int num1, int num2, int num3) {
            int g = num1;

            if (num2 > g) {
                g = num2;
            }

            if (num3 > g) {
                g = num3;
            }

            greatest = new int;
            *greatest = g;
        }
    };

    int findGreatest(){
        GreatestFinder ob(num1, num2, num3);
        return *(ob.greatest);
    }
};

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    Numbers numbersInstance(a, b, c);
    int result = numbersInstance.findGreatest();
    cout << "The greatest number among " << a << ", " << b << ", and " << c << " is: " << result << endl;

    return 0;
}