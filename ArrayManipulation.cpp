/*AIM: Write a program for managing and manipulating data using Array of Objects. THEORY:
An array of objects is a data structure that allows for the storage and manipulation of multiple instances of a class or structure. Each element in the array is an object, and these objects can be accessed using an index. an array of objects allows for the organized storage and manipulation of multiple Student instances. Each Student object holds data such as name, branch, roll number, age, sex, and marks in five subjects. By using an array of these objects, we can efficiently manage a collection of students, perform operations like calculating percentages, and filter students based on specific criteria (e.g., displaying those with more than 70% marks). This approach provides a structured way to handle and process student information, enabling easy access and modification of each student's data. This approach is useful for managing collections of related data, as it enables systematic organization and processing.*/

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string branch;
    int rollNumber;
    int age;
    char sex;
    int marks[5];

    void setData() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter branch: ";
        cin >> branch;
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter sex (M/F): ";
        cin >> sex;
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    float calculatePercentage() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return (total / 5.0);
    }

    void display() {
        cout << "Name: " << name << ", Branch: " << branch 
             << ", Roll Number: " << rollNumber << ", Age: " << age 
             << ", Sex: " << sex << ", Percentage: " << calculatePercentage() << "%" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[100];
    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        students[i].setData();
    }

    cout << "\nStudents with more than 70% marks:\n";
    for (int i = 0; i < n; i++) {
        if (students[i].calculatePercentage() > 70) {
            students[i].display();
        }
    }

    return 0;
}
