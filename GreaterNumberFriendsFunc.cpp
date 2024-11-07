#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    int numA;

public:
    A(int a) : numA(a) {}

    friend void greatest(A, B);
};

class B {
    int numB;

public:
    B(int b) : numB(b) {}

    friend void greatest(A, B);
};

void greatest(A a, B b) {
    if (a.numA > b.numB) {
        cout << "Greatest number is: " << a.numA << endl;
    } else {
        cout << "Greatest number is: " << b.numB << endl;
    }
}

int main() {
    A objA(10);
    B objB(20);

    greatest(objA, objB);

    return 0;
}
