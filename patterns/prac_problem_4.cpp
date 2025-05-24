#include <iostream>
using namespace std;

int main() {
    int num = 1; // num -> is the identifier for increaments
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << num;
            num = num + 1;
        }
        cout << endl;
    }
    
}