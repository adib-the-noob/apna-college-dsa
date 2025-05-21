#include <iostream>
using namespace std;

int main() {
    int theNumber = 2; 
    bool isPrime = false;
    for (int i = 2; i < theNumber - 1; i++)
    {
        if (theNumber % i == 0)
        {
            isPrime = false;
            break;
        }
        isPrime = true;
    }

    if (isPrime == true)
    {
        cout << "This is a Prime Number!" << endl;
    } else {
        cout << "This is not a Prime Number!" << endl;
    }
    
}