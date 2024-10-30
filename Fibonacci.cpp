#include <iostream>
using namespace std;

class Fibonacci {
public:
    int terms;
    int Fibb[100];

    Fibonacci(int n) : terms(n) {
        Fibb[0] = 0;
        Fibb[1] = 1;
        for (int i = 2; i < terms; i++) {
            Fibb[i] = Fibb[i - 1] + Fibb[i - 2];
        }
    }

    Fibonacci(const Fibonacci &f) : terms(f.terms) {
        for (int i = 0; i < terms; i++) {
            Fibb[i] = f.Fibb[i];
        }
    }

    void display() {
        for (int i = 0; i < terms; i++) {
            cout << Fibb[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int num;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> num;

    Fibonacci fib1(num);
    cout << "Original Fibonacci series: ";
    fib1.display();

    Fibonacci fib2 = fib1;
    cout << "Copied Fibonacci series: ";
    fib2.display();

    return 0;
}
