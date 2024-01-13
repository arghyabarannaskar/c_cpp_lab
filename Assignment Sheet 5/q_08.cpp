#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Record {
public:
    string name;
    int age;
    string address;
};

class FileManager {
private:
    const string fileName = "records.txt";

public:
    void addRecord(const Record& record) {
        ofstream outFile(fileName, ios::app);

        if (outFile.is_open()) {
            outFile << record.name << "," << record.age << "," << record.address << endl;
            cout << "Record added successfully." << endl;
            outFile.close();
        } else {
            cout << "Error: Unable to open the file." << endl;
        }
    }

    void viewAllRecords() {
        ifstream inFile(fileName);

        if (inFile.is_open()) {
            cout << "All Records:" << endl;
            string line;
            while (getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
        } else {
            cout << "Error: Unable to open the file." << endl;
        }
    }

    void deleteRecord(const string& nameToDelete) {
        ifstream inFile(fileName);
        ofstream tempFile("temp.txt", ios::out);

        if (!inFile.is_open() || !tempFile.is_open()) {
            cout << "Error: Unable to open the file." << endl;
            return;
        }

        string line;
        bool recordFound = false;
        while (getline(inFile, line)) {
            size_t pos = line.find(",");
            string name = line.substr(0, pos);
            if (name == nameToDelete) {
                recordFound = true;
            } else {
                tempFile << line << endl;
            }
        }

        inFile.close();
        tempFile.close();

        remove(fileName.c_str());
        rename("temp.txt", fileName.c_str());

        if (recordFound) {
            cout << "Record deleted successfully." << endl;
        } else {
            cout << "Record not found." << endl;
        }
    }

    void searchRecord(const string& nameToSearch) {
        ifstream inFile(fileName);

        if (inFile.is_open()) {
            string line;
            bool recordFound = false;
            while (getline(inFile, line)) {
                size_t pos = line.find(",");
                string name = line.substr(0, pos);
                if (name == nameToSearch) {
                    recordFound = true;
                    cout << "Record Found:" << endl;
                    cout << line << endl;
                    break;
                }
            }

            inFile.close();

            if (!recordFound) {
                cout << "Record not found." << endl;
            }
        } else {
            cout << "Error: Unable to open the file." << endl;
        }
    }

    void updateRecord(const Record& updatedRecord) {
        ifstream inFile(fileName);
        ofstream tempFile("temp.txt", ios::out);

        if (!inFile.is_open() || !tempFile.is_open()) {
            cout << "Error: Unable to open the file." << endl;
            return;
        }

        string line;
        bool recordFound = false;
        while (getline(inFile, line)) {
            size_t pos = line.find(",");
            string name = line.substr(0, pos);
            if (name == updatedRecord.name) {
                recordFound = true;
                tempFile << updatedRecord.name << "," << updatedRecord.age << "," << updatedRecord.address << endl;
            } else {
                tempFile << line << endl;
            }
        }

        inFile.close();
        tempFile.close();

        remove(fileName.c_str());
        rename("temp.txt", fileName.c_str());

        if (recordFound) {
            cout << "Record updated successfully." << endl;
        } else {
            cout << "Record not found." << endl;
        }
    }
};

int main() {
    FileManager fileManager;
    Record record;
    char choice;

    do {
        cout << "\nMenu:" << endl;
        cout << "a) Add new record" << endl;
        cout << "b) View all records" << endl;
        cout << "c) Delete particular record" << endl;
        cout << "d) Search record" << endl;
        cout << "e) Update record" << endl;
        cout << "f) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, record.name);
                cout << "Enter age: ";
                cin >> record.age;
                cout << "Enter address: ";
                cin.ignore();
                getline(cin, record.address);
                fileManager.addRecord(record);
                break;

            case 'b':
                fileManager.viewAllRecords();
                break;

            case 'c':
                cout << "Enter name to delete: ";
                cin.ignore();
                getline(cin, record.name);
                fileManager.deleteRecord(record.name);
                break;

            case 'd':
                cout << "Enter name to search: ";
                cin.ignore();
                getline(cin, record.name);
                fileManager.searchRecord(record.name);
                break;

            case 'e':
                cout << "Enter name to update: ";
                cin.ignore();
                getline(cin, record.name);
                cout << "Enter new age: ";
                cin >> record.age;
                cout << "Enter new address: ";
                cin.ignore();
                getline(cin, record.address);
                fileManager.updateRecord(record);
                break;

            case 'f':
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }

    } while (choice != 'f');

    return 0;
}
