#include <bits/stdc++.h>
using namespace std;
class Circle
{
private:
    float radius;

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