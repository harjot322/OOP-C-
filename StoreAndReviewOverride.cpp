#include <iostream>
using namespace std;

class LIST {
public:
    virtual void store(int value) = 0;
    virtual int retrieve() = 0;
};

class STACK : public LIST {
    int stack[10];
    int top;

public:
    STACK() : top(-1) {}

    void store(int value) override {
        if (top < 9) {
            stack[++top] = value;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    int retrieve() override {
        if (top >= 0) {
            return stack[top--];
        } else {
            cout << "Stack underflow" << endl;
            return -1;
        }
    }
};

class QUEUE : public LIST {
    int queue[10];
    int front, rear;

public:
    QUEUE() : front(0), rear(0) {}

    void store(int value) override {
        if (rear < 10) {
            queue[rear++] = value;
        } else {
            cout << "Queue overflow" << endl;
        }
    }

    int retrieve() override {
        if (front < rear) {
            return queue[front++];
        } else {
            cout << "Queue underflow" << endl;
            return -1;
        }
    }
};

int main() {
    LIST* list;
    STACK s;
    QUEUE q;

    list = &s;
    list->store(10);
    list->store(20);
    cout << "Stack retrieve: " << list->retrieve() << endl;
    cout << "Stack retrieve: " << list->retrieve() << endl;

    list = &q;
    list->store(30);
    list->store(40);
    cout << "Queue retrieve: " << list->retrieve() << endl;
    cout << "Queue retrieve: " << list->retrieve() << endl;

    return 0;
}
