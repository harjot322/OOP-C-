#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter(int c = 0) : count(c) {}

    Counter operator++() { // Prefix increment
        ++count;
        return *this;
    }

    Counter operator++(int) { // Postfix increment
        Counter temp = *this;
        count++;
        return temp;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial count: ";
    c1.display();

    ++c1;
    cout << "After prefix increment: ";
    c1.display();

    c1++;
    cout << "After postfix increment: ";
    c1.display();

    return 0;
}
