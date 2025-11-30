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
        cout << feet << "' " << inches << endl;
    }

    Distance operator+(const Distance& d) const {
        int f = feet + d.feet;
        float i = inches + d.inches;

        if (i >= 12.0f) {
            i -= 12.0f;
            f++;
        }

        return Distance(f, i);
    }

    Distance operator-(const Distance& d) const {
        int f = feet - d.feet;
        float i = inches - d.inches;

        if (i < 0) {
            i += 12.0f;
            f--;
        }

        if (f < 0) {
            f = 0;
            i = 0;
        }

        return Distance(f, i);
    }
};

int main() {
    Distance d1(6, 4);
    Distance d2(5, 11);
    Distance d3;

    d3 = d1 - d2;
    d3.display();
    cout << endl;

    return 0;
}
