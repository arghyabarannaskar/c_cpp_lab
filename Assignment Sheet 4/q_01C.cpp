#include <bits/stdc++.h>
using namespace std;
class CircleWithoutMethods
{
protected:
    float radius;
};
class Circle : protected CircleWithoutMethods
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