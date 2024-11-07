#include <iostream>
using namespace std;

template <typename T>
void swapItems(T& item1, T& item2) {
    T temp = item1;
    item1 = item2;
    item2 = temp;
}

int main() {
    int intA = 5, intB = 10;
    float floatA = 5.5, floatB = 10.5;
    char charA = 'A', charB = 'B';

    cout << "Before swapping:" << endl;
    cout << "intA: " << intA << ", intB: " << intB << endl;
    cout << "floatA: " << floatA << ", floatB: " << floatB << endl;
    cout << "charA: " << charA << ", charB: " << charB << endl;

    swapItems(intA, intB);
    swapItems(floatA, floatB);
    swapItems(charA, charB);

    cout << "\nAfter swapping:" << endl;
    cout << "intA: " << intA << ", intB: " << intB << endl;
    cout << "floatA: " << floatA << ", floatB: " << floatB << endl;
    cout << "charA: " << charA << ", charB: " << charB << endl;

    return 0;
}
