#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) // -> 5 lines
    {
        for (int j = 1; j <= i + 1 ; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}