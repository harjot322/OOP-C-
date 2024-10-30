/*AIM: Write a program to perform addition of two complex numbers using constructor overloading. The first constructor which takes no argument is used to create objects which are not initialized, second which takes one argument is used to initialize real and imag parts to equal values and third which takes two argument is used to initialized real and imag to two different values.
THEORY:
Constructor overloading is a powerful feature in object-oriented programming that allows a class to have multiple constructors with different parameter lists. This provides flexibility in how objects of the class are initialized. In this scenario, we create a Complex class to represent complex numbers, which consist of a real part and an imaginary part. The Complex class will demonstrate constructor overloading with three distinct constructors. The default constructor 
initializes complex numbers to zero, allowing the creation of objects without any initial values. The single argument 
constructor initializes both the real and imaginary parts to the same value, useful for cases where both parts of the 
complex number are intended to be identical. The two argument constructor allows for independent initialization of the 
real and imaginary parts with different values.
Additionally, the class will include a method to add two complex numbers. This method performs the addition by 
separately summing the real parts and the imaginary parts of the complex numbers. */
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int value) {
        real = value;
        imag = value;
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;
    Complex c2(6);
    Complex c3(8, 2);

    Complex result = c2.add(c3);

    cout << "First complex number: ";
    c2.display();
    cout << "Second complex number: ";
    c3.display();
    cout << "Result of addition: ";
    result.display();

    return 0;
}
