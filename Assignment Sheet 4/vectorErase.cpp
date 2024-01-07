#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    // vector<string> names{ "apple", "banana", "cherry", "mango" , "orange" };
    // names.erase(names.begin()+ 2 );
    // for ( string x: names ) {
    //     cout << x << endl;
    // }

    vector<string> names{ "apple", "banana", "cherry", "mango" , "orange" };
    int start = 2;
    int end = 4;
    names.erase( std::next(names.begin(), start),
                std::next(names.begin(), end) );
    for ( string x: names ) {
        cout << x << endl;
    }
}