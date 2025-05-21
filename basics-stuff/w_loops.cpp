#include <iostream>
using namespace std;


void calculateSum(int ending_number){
    int sum = 0;
    for (int singleNum = 0; singleNum <= ending_number; singleNum++)
    {
        if (singleNum % 2 == 0) {
            sum = sum + singleNum;
        }
    }
    cout << "result is : " << sum << endl;
}

int main() {
    int end = 12;
    calculateSum(end); // 2 + 4 + 6 + 8 + 10 + 12 => 
    return 0;
}
