#include <iostream>
using namespace std;
int main() {
    const int SIZE = 100;
    char str[SIZE];
    cout << "enter a paragraph" << endl ;
    cin.get(str, SIZE, '!');
    cout << str;
    return 0;
}