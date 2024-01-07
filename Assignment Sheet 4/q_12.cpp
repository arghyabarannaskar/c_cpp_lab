#include <iostream>
using namespace std;
class String
{
public:
    string str;
    String operator+(String s1)
    {
        str += s1.str;
        return *this;
    }
    void reverse()
    {
        int i = 0;
        int j = str.size() - 1;
        while (i <= j)
        {
            swap(str[i], str[j]);
            i++;
            j--;
        }
    }
};
int main()
{
    String s1;
    s1.str = "Good ";
    String s2;
    s2.str = "Morning ";
    String s3 = s1 + s2;
    cout << "After Concatenation : " << s3.str << endl;
    s3.reverse();
    cout << "After Reverse : " << s3.str << endl;
    return 0;
}
