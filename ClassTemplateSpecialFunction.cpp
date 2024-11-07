#include <iostream>
using namespace std;

template <typename T>
class Compare {
    T num1, num2;

public:
    Compare(T a, T b) : num1(a), num2(b) {
        cout << "Constructor called with values: " << num1 << " and " << num2 << endl;
    }

    T getBigger() {
        return (num1 > num2) ? num1 : num2;
    }

    ~Compare() {
        cout << "Destructor called for values: " << num1 << " and " << num2 << endl;
    }
};

int main() {
    int intVal1, intVal2;
    cout << "Enter two integers: ";
    cin >> intVal1 >> intVal2;

    Compare<int> intCompare(intVal1, intVal2);
    cout << "Bigger integer: " << intCompare.getBigger() << endl;

    double doubleVal1, doubleVal2;
    cout << "Enter two floating-point numbers: ";
    cin >> doubleVal1 >> doubleVal2;

    Compare<double> doubleCompare(doubleVal1, doubleVal2);
    cout << "Bigger floating-point number: " << doubleCompare.getBigger() << endl;

    return 0;
}
