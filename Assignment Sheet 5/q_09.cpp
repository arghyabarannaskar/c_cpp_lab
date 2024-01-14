#include <iostream>

using namespace std;

class Mammals {
public:
    void display()  {
        cout << "I am a mammal." << endl;
    }
};

class MarineAnimals {
public:
    void display()  {
        cout << "I am a marine animal." << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals {
public:
    void display() {
        cout << "I belong to both categories: Mammals as well as Marine Animals." << endl;
    }
};

int main() {
    Mammals mammalObj;
    MarineAnimals marineAnimalObj;
    BlueWhale blueWhaleObj;

    cout << "Calling function of Mammals by the object of Mammals:" << endl;
    mammalObj.display();
    cout << "------------------------" << endl;

    cout << "Calling function of MarineAnimals by the object of MarineAnimals:" << endl;
    marineAnimalObj.display();
    cout << "------------------------" << endl;

    cout << "Calling function of BlueWhale by the object of BlueWhale:" << endl;
    blueWhaleObj.display();
    cout << "------------------------" << endl;

    cout << "Calling function of Mammals by the object of BlueWhale:" << endl;
    blueWhaleObj.Mammals::display();
    cout << "------------------------" << endl;

    cout << "Calling function of MarineAnimals by the object of BlueWhale:" << endl;
    blueWhaleObj.MarineAnimals::display();
    cout << "------------------------" << endl;

    return 0;
}
