#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];

public:
    String(const char* s = "") {
        strcpy(str, s);
    }

    String operator+(const String& s) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    String& operator=(const String& s) {
        strcpy(str, s.str);
        return *this;
    }

    bool operator<=(const String& s) {
        return strcmp(str, s.str) <= 0;
    }

    int length() {
        return strlen(str);
    }

    void tolower() {
        for (int i = 0; str[i]; i++) {
            str[i] = std::tolower(str[i]);
        }
    }

    void toupper() {
        for (int i = 0; str[i]; i++) {
            str[i] = std::toupper(str[i]);
        }
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    String str1("Harjot");
    String str2("Kriti");
    String str3;

    str3 = str1 + str2;
    cout << "Concatenated String: ";
    str3.display();

    str3 = str1;
    cout << "Copied String: ";
    str3.display();

    cout << "Comparison (str1 <= str2): " << (str1 <= str2) << endl;

    cout << "Length of str1: " << str1.length() << endl;

    str1.tolower();
    cout << "Lowercase str1: ";
    str1.display();

    str2.toupper();
    cout << "Uppercase str2: ";
    str2.display();

    return 0;
}
