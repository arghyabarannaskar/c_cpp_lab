#include <bits/stdc++.h>
using namespace std;
class Volume
{
public:
    void calculate(float a, char c)
    {
        cout << "Volume of Cube : " << a * a * a << endl;
    }
    void calculate(float l, float w, float h)
    {
        cout << "Volume of Cuboid : " << l * w * h << endl;
    }
    void calculate(float r, float h, char c)
    {
        cout << "Volume of Cone : " << (3.14 * r * r * h) / 3 << endl;
    }
    void calculate(float r, float h, string s)
    {
        cout << "Volume of Cylinder : " << 3.14 * r * r * h << endl;
    }
    void calculate(float r, string s)
    {
        cout << "Volume of Sphere : " << (4 * 3.14 * r * r * r) / 3 << endl;
    }
};
int main()
{
    Volume ob;
    int choose;
    float a, b, c;
    while (1)
    {
        cout << "For Volume of Cube Enter 1" << endl;
        cout << "For Volume of Cuboid Enter 2" << endl;
        cout << "For Volume of Cone Enter 3" << endl;
        cout << "For Volume of Cylinder Enter 4" << endl;
        cout << "For Volume of Sphere Enter 5" << endl;
        cout << "For Exit Enter 6" << endl;
        cin >> choose;
        switch (choose)
        {
        case 1:
            cout << "Enter length of one side : ";
            cin >> a;
            ob.calculate(a, 'c');
            break;
        case 2:
            cout << "Enter Length, Width, Height : ";
            cin >> a >> b >> c;
            ob.calculate(a, b, c);
            break;
        case 3:
            cout << "Enter Radius, Height : ";
            cin >> a >> b;
            ob.calculate(a, b, 'c');
            break;
        case 4:
            cout << "Enter Radius, Height : ";
            cin >> a >> b;
            ob.calculate(a, b, "cylinder");
            break;
        case 5:
            cout << "Enter Radius : ";
            cin >> a;
            ob.calculate(a, "sphere");
            break;
        case 6:
            return 0;
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }
    return 0;
}