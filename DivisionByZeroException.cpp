#include <iostream>
#include <stdexcept>
using namespace std;

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    try {
        double result = divide(num1, num2);
        cout << "Result: " << result << endl;
    } catch (const invalid_argument& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
