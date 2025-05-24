#include <iostream>
using namespace std;

int main() {
    char character = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << character;
        }
        character++;
        cout << endl;
    }
    return 0;
}