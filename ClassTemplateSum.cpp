#include <iostream>
using namespace std;

template <typename T>
class Sum {
    T num1, num2;

public:
    void readData() {
        cout << "Enter first value: ";
        cin >> num1;
        cout << "Enter second value: ";
        cin >> num2;
    }

    T calculateSum() {
        return num1 + num2;
    }
};

int main() {
    Sum<int> intSum;
    intSum.readData();
    cout << "Sum of integers: " << intSum.calculateSum() << endl;

    Sum<double> doubleSum;
    doubleSum.readData();
    cout << "Sum of floating-point numbers: " << doubleSum.calculateSum() << endl;

    return 0;
}
