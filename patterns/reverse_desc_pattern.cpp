#include <iostream>
using namespace std;

// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

int main() {
// while i = 0, space = 0, number = 4 [i = space]
// while i = 1, space = 1, number = 5
// while i = 2, space = 2, number = 3
// while i = 3, space = 1, number = 2


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (i + 1);
        }   
        cout << endl;     
    }
    
}