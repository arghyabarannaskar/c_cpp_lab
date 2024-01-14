#include <iostream>

using namespace std;

class Person {
public:
    string name;

    Person(const string& n) : name(n) {}

    virtual void display() const {
        cout << "Person: " << name << endl;
    }
};

class Employee : virtual public Person {
public:
    int employeeId;

    Employee(const string& n, int id) : Person(n), employeeId(id) {}

    void display() {
        cout << "Employee: " << name << "\tEmployee ID: " << employeeId << endl;
    }
};

class Student : virtual public Person {
public:
    int studentId;

    Student(const string& n, int id) : Person(n), studentId(id) {}

    void display() {
        cout << "Student: " << name << "\tStudent ID: " << studentId << endl;
    }
};

class Manager : public Employee, public Student {
public:
    Manager(const string& n, int empId, int stuId) : Person(n), Employee(n, empId), Student(n, stuId) {}

    void display(){
        cout << "Manager: " << name << "\tEmployee ID: " << employeeId << "\tStudent ID: " << studentId << endl;
    }
};

int main() {
    Manager managerObj("John Doe", 12345, 56789);

    cout << "Calling function of Manager by the object of Manager:" << endl;
    managerObj.display();
    cout << "------------------------" << endl;

    cout << "Calling function of Employee by the object of Manager:" << endl;
    managerObj.Employee::display();
    cout << "------------------------" << endl;

    cout << "Calling function of Student by the object of Manager:" << endl;
    managerObj.Student::display();
    cout << "------------------------" << endl;

    return 0;
}
