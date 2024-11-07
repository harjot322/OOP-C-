#include <iostream>
using namespace std;

class SHAPE {
protected:
    double dimension1, dimension2;

public:
    void getdata() {
        cout << "Enter first dimension: ";
        cin >> dimension1;
        cout << "Enter second dimension: ";
        cin >> dimension2;
    }

    virtual void display() = 0;
};

class TRIANGLE : public SHAPE {
public:
    void display() override {
        double area = 0.5 * dimension1 * dimension2;
        cout << "Area of Triangle: " << area << endl;
    }
};

class RECTANGLE : public SHAPE {
public:
    void display() override {
        double area = dimension1 * dimension2;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    SHAPE* shape;
    int choice;

    cout << "Enter 1 for Triangle, 2 for Rectangle: ";
    cin >> choice;

    if (choice == 1) {
        shape = new TRIANGLE();
    } else if (choice == 2) {
        shape = new RECTANGLE();
    } else {
        cout << "Invalid choice" << endl;
        return 1;
    }

    shape->getdata();
    shape->display();

    delete shape;

    return 0;
}
