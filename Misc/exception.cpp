#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double a, double b) {
    if (b == 0){
        throw invalid_argument("divisor cant be 0");
    }
    return a/b;
}

int main() {
    int a, b;
    cout << "Enter two numbers for division: " ;
    cin >> a;
    cin >> b;
    try {
        double r = divide(a,b);
        cout << endl << r << endl;
    } catch (invalid_argument) {
        cout << "error!";
    }
    return 0;
}