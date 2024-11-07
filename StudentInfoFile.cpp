#include <iostream>
#include <fstream>
using namespace std;

class Student {
    char name[50];
    int age;
    char sex;
    float height;
    float weight;

public:
    void getData() {
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter sex (M/F): ";
        cin >> sex;
        cout << "Enter height (in cm): ";
        cin >> height;
        cout << "Enter weight (in kg): ";
        cin >> weight;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main() {
    Student student;
    fstream file;

    // Write student information to file
    file.open("student.dat", ios::out | ios::binary);
    if (!file) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    student.getData();
    file.write(reinterpret_cast<char*>(&student), sizeof(student));
    file.close();
    cout << "Student information has been written to student.dat" << endl;

    // Read student information from file
    file.open("student.dat", ios::in | ios::binary);
    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    file.read(reinterpret_cast<char*>(&student), sizeof(student));
    cout << "\nDisplaying student information from file:" << endl;
    student.displayData();
    file.close();

    return 0;
}
