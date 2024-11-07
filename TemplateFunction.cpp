#include <iostream>
using namespace std;

template <typename T>
T square(T num) {
    return num * num;
}

int main() {
    int intNum = 5;
    float floatNum = 5.5;
    double doubleNum = 7.7;

    cout << "Square of " << intNum << " is: " << square(intNum) << endl;
    cout << "Square of " << floatNum << " is: " << square(floatNum) << endl;
    cout << "Square of " << doubleNum << " is: " << square(doubleNum) << endl;

    return 0;
}