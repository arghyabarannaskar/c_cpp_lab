#include <iostream>
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
    void join(String str1, String str2)
    {
        this->s = str1.s + str2.s;
    }
};
int main()
{
    String str1("Good ");
    String str2("Morning ");
    str1.display();
    str2.display();
    String str3;
    str3.join(str1, str2);
    str3.display();
}