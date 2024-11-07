#include <iostream>
using namespace std;

class STUDENT {
protected:
    int roll_no;
    string name;

public:
    void getStudentData() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
    }

    void displayStudentData() {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

class EXAM : public STUDENT {
protected:
    int marks[6];

public:
    void getExamData() {
        cout << "Enter marks for six subjects: ";
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void displayExamData() {
        cout << "Marks in six subjects: ";
        for (int i = 0; i < 6; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class RESULT : public EXAM {
    int total_marks;

public:
    void calculateTotal() {
        total_marks = 0;
        for (int i = 0; i < 6; i++) {
            total_marks += marks[i];
        }
    }

    void displayResult() {
        displayStudentData();
        displayExamData();
        cout << "Total Marks: " << total_marks << endl;
    }
};

int main() {
    RESULT student;
    student.getStudentData();
    student.getExamData();
    student.calculateTotal();
    cout << "\nDisplaying Student Result:\n";
    student.displayResult();

    return 0;
}
