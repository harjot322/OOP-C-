/*AIM: Write a program to create a class Time with members hours, minutes, and seconds, and implement functionality to take input, add two Time objects, pass objects to a function, and display the result.
THEORY:
In this program, we define a class named Time to represent time, with members for hours, minutes, and seconds. The class will include methods to input these time components, add two Time objects together, and display the resulting time. To handle time addition, the class will feature a function that performs the arithmetic while accounting for overflow conditions (e.g., converting excess seconds into minutes and excess minutes into hours). This demonstrates how objects can be manipulated and how methods can be used to perform calculations and present results. Using this approach, managing and operating on time data effectively became easier within a class structure.*/
#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    void inputTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    Time addTime(Time t) {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + result.seconds / 60;
        result.hours = hours + t.hours + result.minutes / 60;

        result.seconds %= 60;
        result.minutes %= 60;
        result.hours %= 24;

        return result;
    }

    void displayTime() {
        cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
};

void displayResult(Time t) {
    t.displayTime();
}

int main() {
    Time time1, time2, result;

    cout << "Enter time 1:\n";
    time1.inputTime();
    cout << "Enter time 2:\n";
    time2.inputTime();

    result = time1.addTime(time2);
    cout << "Resultant time after addition: ";
    displayResult(result);

    return 0;
}
