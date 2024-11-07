#include <iostream>
using namespace std;

template <typename T>
void display(T item) {
    cout << "Single item: " << item << endl;
}

template <typename T1, typename T2>
void display(T1 item1, T2 item2) {
    cout << "Two items: " << item1 << " and " << item2 << endl;
}

int main() {
    int intVal = 10;
    double doubleVal = 20.5;
    char charVal = 'A';

    display(intVal);
    display(doubleVal, charVal);

    return 0;
}
