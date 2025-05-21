#include <iostream>
using namespace std;

int main() {
    int age = 4;
    string fullName = "John Doe";
    float price = 19.99;
    bool isAvailable = true;
    char grade = 'A';
    
    cout << sizeof(age) << endl;
    cout << fullName << endl; 
    cout << price << endl;
    cout << isAvailable << endl;
    cout << grade << endl;

    cout << "=======================" << endl;
    int value = grade;
    cout << value << endl; // ASCII value of 'A'
    int typeCasting = (int)grade;
    cout << typeCasting << endl; // ASCII value of 'A'
    return 0;
}