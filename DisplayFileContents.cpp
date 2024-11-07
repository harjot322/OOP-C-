#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("output.txt");

    if (!inputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;
    cout << "Contents of the file:" << endl;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();
    return 0;
}
