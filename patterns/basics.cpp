#include <iostream>
using namespace std;

int main() {
    // square patterns
    // nested Loops
    // outer Loops -> for How Many Lines the Height
    // inner loop -> for Every lines element
    for (int i = 0; i < 5; i++)
    {
        char ch = 'A';
        for (int j = 0; j < 5; j++)
        {
            cout << ch << " ";    
            ch = ch + 1;
        }
        cout << endl;
    }
    
    return 0;
}