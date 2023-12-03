#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout << "Constructing base"<<endl;
    }
    virtual ~base()
    {
        cout << "Destructing base"<<endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Constructing derived"<<endl;
    }
    virtual ~derived()
    {
        cout << "Destructing derived"<<endl;
    }
};

int main()
{
    derived *ob1 = new derived();
    base *ob2 = ob1;
    delete ob2;
    return 0;
}