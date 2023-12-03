#include <bits/stdc++.h>
using namespace std;
class Parameter
{
protected:
    float radius;
};
class Circle : protected Parameter
{
public:
    void calculateArea(float r)
    {
        radius = r;
        cout << 3.14 * radius * radius << endl;
    }
};
int main()
{
    Circle c;
    c.calculateArea(2.1);
    return 0;
}