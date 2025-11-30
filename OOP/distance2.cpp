#include <iostream>
using namespace std;

class Distance{
    int feet, inches;
public:
    Distance() : feet(0),inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}
    ~Distance() {}
    
    int getFeet() {return feet;}
    int getInches() {return inches;}

    void setFeet(int f) {
        if(f < 0) {
            f = -1*(f);
        }
        feet = f;
    }

    void setInches(int i) {
        inches = i % 12;
        if (i >= 12) feet += i/12;
    }

    void display() const {
        cout << feet <<"\' "<< inches << endl;
    }

    Distance operator+(Distance& d) {
        int f = feet + d.feet;
        int i = inches + d.inches;
        Distance d1;
        d1.setFeet(f);
        d1.setInches(i);
        return d1;
    }
};
