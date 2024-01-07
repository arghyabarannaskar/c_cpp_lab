#include <iostream>
using namespace std;
class Time
{
private:
    int h, m, s;

public:
    friend istream &operator>>(istream &in, Time &t);
    friend Time operator+(Time t1, Time t2);
    friend ostream &operator<<(ostream &out, const Time &t);
    friend bool operator==(Time t1, Time t2);
};
istream &operator>>(istream &in, Time &t)
{
    cout << "H:";
    in >> t.h;
    cout << "M:";
    in >> t.m;
    cout << "S:";
    in >> t.s;
    return in;
}
Time operator+(Time t1, Time t2)
{
    Time t3;
    t3.s = (t1.s + t2.s) % 60;
    t3.m = (t1.m + t2.m + (t1.s + t2.s) / 60) % 60;
    t3.h = (t1.h + t2.h + ((t1.m + t2.m + (t1.s + t2.s) / 60) / 60)) % 24;
    return t3;
}
ostream &operator<<(ostream &out, const Time &t)
{
    out << "H:" << t.h << " ";
    out << "M:" << t.m << " ";
    out << "S:" << t.s << " ";
    cout << endl;
    return out;
}
bool operator==(Time t1, Time t2)
{
    if (t1.h == t2.h && t1.m == t2.m && t1.s == t2.s)
    {
        return true;
    }
    return false;
}
int main()
{
    Time t1;
    cin >> t1;
    Time t2;
    cin >> t2;
    Time t3 = t1 + t2;
    cout << t3;
    if (t1 == t2)
        cout << "Equal" << endl;
    else
    {
        cout << "Not equal" << endl;
    }
    return 0;
}