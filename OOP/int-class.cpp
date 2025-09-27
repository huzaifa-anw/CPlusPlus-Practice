#include <iostream>
using namespace std;

class Int {
    private:
        int value;
    
    public:
        Int() : value(0) {} 
        Int(int n) : value(n) {}

        void displayInt() {
            cout << value << endl;
        }

        void addInts(Int a, Int b) {
            value = a.value + b.value;
        }
};

int main() {

    Int x(3); // initialized int
    Int y(10); // initialized int
    Int z; // non initialized (default val)

    z.addInts(x, y);
    z.displayInt();

    return 0;
}