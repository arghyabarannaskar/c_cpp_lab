#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    char vd[][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    enum week_days
    {
        Sun,
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
    };
    int i;
    bool b = true;
    srand(999);
    while(b){
        i = rand() % 7;
        switch (i)  
        {
        case Sun:
            cout << vd[i] << " is a holiday!" << endl;
            break;
        case Sat:
            cout << vd[i] << " marks the weekend!" << endl;
            b = false;

        default:
            cout << vd[i] << " is work day number " << i << endl;
            break;
        }
    }

    return 0;
}