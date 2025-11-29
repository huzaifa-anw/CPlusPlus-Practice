#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        float inches;
    public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, float i) : feet(f), inches(i) {}

    void display() const {
        cout << feet << "\' " << inches << endl;
    }
}