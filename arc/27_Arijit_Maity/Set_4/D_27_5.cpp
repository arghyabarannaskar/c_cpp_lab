#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex()
    {
        this->real = 1;
        this->imaginary = 1;
    }
    Complex(int real)
    {
        this->real = real;
        this->imaginary = 1;
    }
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void show()
    {
        cout << real << "+" << imaginary << "i" << endl;
    }
    Complex sum(Complex ob1, Complex ob2)
    {
        this->real = ob1.real + ob2.real;
        this->imaginary = ob1.imaginary + ob2.imaginary;
        return *this;
    }
};
int main()
{
    Complex ob1;
    ob1.show();
    Complex ob2(3);
    ob2.show();
    Complex ob3(5, 9);
    ob3.show();
    Complex ob4;
    ob4 = ob4.sum(ob2, ob3);
    cout << "Sum of second and last complex number : ";
    ob4.show();
    return 0;
}