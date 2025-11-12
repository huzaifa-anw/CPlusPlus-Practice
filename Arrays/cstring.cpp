#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    const int MAX = 3;
    char str[MAX];
    cin >> setw(MAX) >> str; // wont let the user input more than MAX - 1 characters
    cout << str;

    return 0;
}