#include <iostream>
using namespace std;

class Factorial {
public:
    int number;
    long fact;

    Factorial(int n) {
        number = n;
        fact = 1;
        for (int i = 1; i <= number; i++) {
            fact *= i;
        }
    }

    void display() {
        cout << "Factorial of " << number << " is: " << fact << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0 || num > 20) {
        cout << "Please enter a number between 0 and 20 for accurate factorial calculation." << endl;
    } else {
        Factorial f(num);
        f.display();
    }

    return 0;
}
