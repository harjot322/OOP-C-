#include <iostream>
using namespace std;

class Numbers; // Forward declaration

class SumDisplay {
public:
    void displaySum(Numbers& numObj);
};

class Numbers {
    int num1, num2;

public:
    Numbers(int a, int b) : num1(a), num2(b) {}

    friend class SumDisplay;
};

void SumDisplay::displaySum(Numbers& numObj) {
    int sum = numObj.num1 + numObj.num2;
    cout << "Number 1: " << numObj.num1 << endl;
    cout << "Number 2: " << numObj.num2 << endl;
    cout << "Sum: " << sum << endl;
}

int main() {
    Numbers obj(10, 20);
    SumDisplay display;

    display.displaySum(obj);

    return 0;
}
