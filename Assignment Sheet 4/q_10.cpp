#include <iostream>
using namespace std;
class Volume
{
public:
    void calculate(int a)
    {
        cout << "Volume of Cube : " << a * a * a << endl;
    }
    void calculate(int l, int w, int h)
    {
        cout << "Volume of Cuboid : " << l * w * h << endl;
    }
    void calculate(float r, float h)
    {
        cout << "Volume of Cone : " << (3.14 * r * r * h) / 3 << endl;
    }
    void calculate(double r, double h)
    {
        cout << "Volume of Cylinder : " << 3.14 * r * r * h << endl;
    }
    void calculate(float r)
    {
        cout << "Volume of Sphere : " << (4 * 3.14 * r * r * r) / 3 << endl;
    }
};
int main()
{
    Volume ob;
    int choose;
    int sideOfCube, l, w, he;
    float a, b;
    double r, h;
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
            cin >> sideOfCube;
            ob.calculate(sideOfCube);
            break;
        case 2:
            cout << "Enter Length, Width, Height : ";
            cin >> l >> w >> he;
            ob.calculate(l, w, he);
            break;
        case 3:
            cout << "Enter Radius, Height : ";
            cin >> a >> b;
            ob.calculate(a, b);
            break;
        case 4:
            cout << "Enter Radius, Height : ";
            cin >> r >> h;
            ob.calculate(r, h);
            break;
        case 5:
            cout << "Enter Radius : ";
            cin >> a;
            ob.calculate(a);
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