#include <bits/stdc++.h>
using namespace std;
class String
{
private:
    string s;

public:
    String(string s = "")
    {
        this->s = s;
    }
    void display()
    {
        cout << s << endl;
    }
    void join(String ob1, String ob2)
    {
        this->s = ob1.s + ob2.s;
    }
};
int main()
{
    String ob1("Good ");
    String ob2("Morning ");
    ob1.display();
    ob2.display();
    String ob3;
    ob3.join(ob1, ob2);
    ob3.display();
}