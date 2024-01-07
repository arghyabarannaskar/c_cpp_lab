#include <iostream>
using namespace std;
class Number
{
private:
    int value;
public:
    Number(int v)
    {
        value = v;
    }
    void print()
    {
        cout << value <<" ";
    }
    friend void swap(Number &n1, Number &n2);
};
void swap(Number &n1, Number &n2)
{
    n1.value = n1.value + n2.value;
    n2.value = n1.value - n2.value;
    n1.value = n1.value - n2.value;
}
int main()
{
    Number n1(4);
    Number n2(5);
    cout<<"\nBefore swapping \n";
    n1.print();
    n2.print();
    swap(n1, n2);
    cout << "\nAfter swapping \n";
    n1.print();
    n2.print();
    return 0;
}