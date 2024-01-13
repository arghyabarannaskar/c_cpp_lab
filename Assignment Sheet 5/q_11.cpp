#include <iostream>
#include <iomanip>

using namespace std;

class Marks {
protected:
    static int rollNumberCounter;
    int rollNumber;
    string name;
    float marks;

public:
    Marks() : rollNumber(0), name(""), marks(0.0) {}

    void setDetails(const string& studentName, float studentMarks) {
        rollNumber = ++rollNumberCounter;
        name = studentName;
        marks = studentMarks;
    }

    void displayDetails() const {
        cout << "Roll Number: " << rollNumber << "\tName: " << name << "\tMarks: " << marks << endl;
    }

    float getMarks() const {
        return marks;
    }
};

int Marks::rollNumberCounter = 0;

class Physics : public Marks {
public:
    Physics() {}

    void setPhysicsMarks(float physicsMarks) {
        marks = physicsMarks;
    }
};

class Chemistry : public Marks {
public:
    Chemistry() {}

    void setChemistryMarks(float chemistryMarks) {
        marks = chemistryMarks;
    }
};

class Mathematics : public Marks {
public:
    Mathematics() {}

    void setMathematicsMarks(float mathematicsMarks) {
        marks = mathematicsMarks;
    }
};

int main() {
    int numStudents;

    cout << "Enter the number of students in the class: ";
    cin >> numStudents;

    Physics* physicsStudents = new Physics[numStudents];
    Chemistry* chemistryStudents = new Chemistry[numStudents];
    Mathematics* mathStudents = new Mathematics[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        string name;
        float physicsMarks, chemistryMarks, mathMarks;

        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Physics Marks: ";
        cin >> physicsMarks;
        physicsStudents[i].setDetails(name, physicsMarks);

        cout << "Chemistry Marks: ";
        cin >> chemistryMarks;
        chemistryStudents[i].setDetails(name, chemistryMarks);

        cout << "Mathematics Marks: ";
        cin >> mathMarks;
        mathStudents[i].setDetails(name, mathMarks);

        cout << endl;
    }

    float totalPhysics = 0.0, totalChemistry = 0.0, totalMath = 0.0;

    for (int i = 0; i < numStudents; ++i) {
        cout << "Details for student " << i + 1 << " in Physics:" << endl;
        physicsStudents[i].displayDetails();
        totalPhysics += physicsStudents[i].getMarks();

        cout << "Details for student " << i + 1 << " in Chemistry:" << endl;
        chemistryStudents[i].displayDetails();
        totalChemistry += chemistryStudents[i].getMarks();

        cout << "Details for student " << i + 1 << " in Mathematics:" << endl;
        mathStudents[i].displayDetails();
        totalMath += mathStudents[i].getMarks();

        cout << "----------------------------------------" << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Average Marks in Physics: " << totalPhysics / numStudents << endl;
    cout << "Average Marks in Chemistry: " << totalChemistry / numStudents << endl;
    cout << "Average Marks in Mathematics: " << totalMath / numStudents << endl;

    delete[] physicsStudents;
    delete[] chemistryStudents;
    delete[] mathStudents;

    return 0;
}
