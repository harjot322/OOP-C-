#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile || !outputFile) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    char ch;
    while (inputFile.get(ch)) {
        if (ch != ' ' && ch != '\t' && ch != '\v' && ch != '\n' && ch != '\r') {
            outputFile.put(ch);
        }
    }

    inputFile.close();
    outputFile.close();

    cout << "White spaces removed and content written to output.txt" << endl;
    return 0;
}
