#include<iostream>
using namespace std;

class Circle{
    private:
        char color;
        float radius;
        static int count;
    public:
    Circle(char c, float r){
        color = c;
        radius = r;
        count++;
    }

    void showCount(){
        cout << "count = " << count << endl;
    }
};

int Circle::count = 0;

int main(){
    Circle c1('R', 1.2f);
    c1.showCount();
    Circle c2('G', 2.2f);
    c2.showCount();

    return 0;
}