#include <iostream>
using namespace std;

bool checkPalindrome(int n) {
    int copy = n;
    int reverse = 0;
    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        reverse = (reverse * 10) + digit;
    }

    if (copy == reverse) return true;
    else return false;
}

int main () {

    int n;
    cout << "Enter a number: " << endl ;
    cin >> n;

    if(checkPalindrome(n)) {
        cout << n << " is a palindrome" << endl ;
    }
    else {
        cout << n << " is NOT a palindrome" << endl ;
    }
}