#include <iostream>
using namespace std;

class MyClass {
    int data;

public:
    MyClass(int d = 0) : data(d) {
        cout << "Constructor called with data: " << data << endl;
    }

    void display() {
        cout << "Data: " << data << endl;
    }

    void* operator new(size_t size) {
        cout << "Custom new operator called. Allocating " << size << " bytes." << endl;
        void* p = malloc(size);
        return p;
    }

    void operator delete(void* p) {
        cout << "Custom delete operator called. Deallocating memory." << endl;
        free(p);
    }
};

int main() {
    MyClass* obj = new MyClass(10);
    obj->display();
    delete obj;

    return 0;
}
