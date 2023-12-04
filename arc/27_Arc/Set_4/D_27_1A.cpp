#include <bits/stdc++.h>
using namespace std;
class Circle
{
public:
    float radius;
    void calculateArea(void)
    {
        cout << 3.14 * radius * radius << endl;
    }
};
int main()
{
    Circle c;
    c.radius = 2.1;
    c.calculateArea();
    return 0;
}