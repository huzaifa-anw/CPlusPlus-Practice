#include <iostream>
using namespace std;
int main () {
    int number;
    int answer = 0;
    cout << "Enter a number: " ;
    cin >> number;

    while (number > 0) {
        int digit = number % 10;
        number /= 10;
        answer = (answer * 10) + digit;
    }
    cout << answer;
}