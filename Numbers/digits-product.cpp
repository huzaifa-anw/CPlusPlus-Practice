#include <iostream>
using namespace std;
int main () {
    int number;
    cout << "Enter a number: " ;
    cin >> number;
    int answer = 1;

    while (number > 0) {
        int digit = number % 10;
        number /= 10;
        answer *= digit;
    }
    cout << answer;
    return 0;
}