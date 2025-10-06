#include <iostream>
using namespace std;

bool checkArmstrong (int n) {
    int digitCount = 0;
    int copy = n;
    int result = 0;

    while (copy > 0) {
        digitCount++;
        copy /= 10;
    }

    copy = n;

    while (copy > 0)
    {
        int digit = copy % 10;
        int nthPower = 1;
        for (int i = 1; i <= digitCount; i++) {
            nthPower *= digit;
        }
        result += nthPower;
        copy /= 10;
    }

    if (result == n) return true;
    else return false;
}


int main () {

    int n;
    cout << "Enter a number: " << endl ;
    cin >> n;

    if(checkArmstrong(n)) {
        cout << n << " is an armstrong number" << endl ;
    }
    else {
        cout << n << " is NOT an armstrong number" << endl ;
    }
}