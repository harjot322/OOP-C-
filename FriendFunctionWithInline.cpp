#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    int numA;

public:
    A(int a) : numA(a) {}

    friend inline void add(A, B);
};

class B {
    int numB;

public:
    B(int b) : numB(b) {}

    friend inline void add(A, B);
};

inline void add(A a, B b) {
    cout << "Sum of numbers: " << (a.numA + b.numB) << endl;
}

int main() {
    A objA(10);
    B objB(20);

    add(objA, objB);

    return 0;
}
