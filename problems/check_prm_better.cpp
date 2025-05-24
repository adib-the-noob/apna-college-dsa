#include <iostream>
using namespace std;
// check IT

int main() {
    int theNumber = 12; 
    bool isPrime = false;
    for (int i = 2; i * i <= theNumber; i++)
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