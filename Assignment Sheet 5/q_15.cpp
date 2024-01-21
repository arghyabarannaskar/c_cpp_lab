#include <iostream>

using namespace std;

class Student {
protected:
    string name;
    int rollNumber;

public:
    Student(const string& n, int roll) : name(n), rollNumber(roll) {}

    virtual void displayDetails() = 0;
};

class Engineering : public Student {
private:
    string branch;

public:
    Engineering(const string& n, int roll, const string& b) : Student(n, roll), branch(b) {}

    void displayDetails() {
        cout << "Engineering Student - Name: " << name << ", Roll Number: " << rollNumber << ", Branch: " << branch << endl;
    }
};

class Medicine : public Student {
private:
    string specialization;

public:
    Medicine(const string& n, int roll, const string& s) : Student(n, roll), specialization(s) {}

    void displayDetails() {
        cout << "Medicine Student - Name: " << name << ", Roll Number: " << rollNumber << ", Specialization: " << specialization << endl;
    }
};

class Science : public Student {
private:
    string subject;

public:
    Science(const string& n, int roll, const string& sub) : Student(n, roll), subject(sub) {}

    void displayDetails() {
        cout << "Science Student - Name: " << name << ", Roll Number: " << rollNumber << ", Subject: " << subject << endl;
    }
};

int main() {
    const int arraySize = 3;
    Student* students[arraySize];

    students[0] = new Engineering("John", 101, "Computer Science");
    students[1] = new Medicine("Alice", 202, "Cardiology");
    students[2] = new Science("Bob", 303, "Physics");

    for (int i = 0; i < arraySize; ++i) {
        students[i]->displayDetails();
    }

    for (int i = 0; i < arraySize; ++i) {
        delete students[i];
    }

    return 0;
}