#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream sourceFile("input.txt");
    ofstream destFile("output.txt");

    if (!sourceFile || !destFile) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    char ch;
    while (sourceFile.get(ch)) {
        destFile.put(ch);
    }

    sourceFile.close();
    destFile.close();

    cout << "Content copied from input.txt to output.txt" << endl;
    return 0;
}