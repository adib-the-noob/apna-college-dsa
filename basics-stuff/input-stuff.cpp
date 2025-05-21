#include <iostream>
using namespace std;

int main() {
    // string name;
    // cout << "Enter your name: ";
    // cin >> name;
    // cout << "Hello, " << name << "!" << endl;

    // int a = 5, b = 10;
    // cout << "sum is: " << a + b << endl;

    int a = 5;
    int x = a++;  // Post-increment
    // a becomes 6, but x gets 5

    int y = ++a;  // Pre-increment
    // a becomes 7, and y gets 7

    cout << "a = " << a << endl;  // 7
    cout << "x = " << x << endl;  // 5
    cout << "y = " << y << endl;  // 7

    return 0;

}