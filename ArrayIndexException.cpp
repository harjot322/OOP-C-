#include <iostream>
#include <stdexcept>
using namespace std;

class Array {
    int arr[5];

public:
    Array() {
        for (int i = 0; i < 5; i++) {
            arr[i] = i * 10;
        }
    }

    int getElement(int index) {
        if (index < 0 || index >= 5) {
            throw out_of_range("Index is out of bounds.");
        }
        return arr[index];
    }
};

int main() {
    Array myArray;
    int index;

    cout << "Enter index to access element: ";
    cin >> index;

    try {
        int element = myArray.getElement(index);
        cout << "Element at index " << index << " is: " << element << endl;
    } catch (const out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
