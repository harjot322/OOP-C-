/*AIM: Write a program for Function Overloading to write functions for calculating the area of a triangle, circle, and rectangle.
THEORY:
Function overloading is a feature in C++ that allows multiple functions to have the same name but different parameter lists. This enhances the flexibility and readability of the code by enabling the use of a single function name for different operations based on the type and number of arguments. The overloaded area function is called based on the arguments provided, making the code more intuitive and reducing the errors. For instance, a single area function can be defined to handle calculations for a triangle by taking base and height as parameters and applying the formula Area= 1/2×base×height. Another version of the area function can be tailored for circles, requiring just the radius and using the formula Area=π×radius2. Similarly, a third version can be used for rectangles, taking length and width as parameters and calculating the area with Area=length×width. By using function overloading, we can write more intuitive and organized code while handling multiple operations effectively.*/

#include <iostream>
using namespace std;

class Shape {
public:
    double area(double radius) {
        return 3.14159 * radius * radius;
    }

    double area(double base, double height) {
        return 0.5 * base * height;
    }

    double area(int length, int width) {
        return length * width;
    }
};

int main() {
    Shape shape;
    
    double radius, base, height;
    int length, width;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << shape.area(radius) << endl;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << shape.area(base, height) << endl;

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << shape.area(length, width) << endl;

    return 0;
}
