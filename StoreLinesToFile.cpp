#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outputFile("output.txt");

    if (!outputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter lines of text (press Enter on an empty line to stop):" << endl;
    string line;

    while (true) {
        getline(cin, line);
        if (line.empty()) {
            break;
        }
        outputFile << line << endl;
    }

    outputFile.close();
    cout << "Text has been stored in output.txt" << endl;

    return 0;
}
