#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class FileStatistics {
private:
    int charCount;
    int wordCount;
    int lineCount;

public:
    FileStatistics() : charCount(0), wordCount(0), lineCount(0) {}

    void processFile(const string& fileName) {
        ifstream inputFile(fileName);

        if (!inputFile.is_open()) {
            cout << "Error: Unable to open the file " << fileName << endl;
            return;
        }

        string line;
        while (getline(inputFile, line)) {
            processLine(line);
            lineCount++;
        }

        inputFile.close();
    }

    void processLine(const string& line) {
        charCount += line.length(); // Counting characters in the line

        istringstream iss(line);
        string word;

        while (iss >> word) {
            wordCount++;
        }
    }

    void displayStatistics() const {
        cout << "File Statistics:" << endl;
        cout << "Number of characters: " << charCount << endl;
        cout << "Number of words: " << wordCount << endl;
        cout << "Number of lines: " << lineCount << endl;
    }
};

int main() {
    string fileName;

    cout << "Enter the name of the file: ";
    cin >> fileName;

    FileStatistics fileStats;
    fileStats.processFile(fileName);
    fileStats.displayStatistics();

    return 0;
}
