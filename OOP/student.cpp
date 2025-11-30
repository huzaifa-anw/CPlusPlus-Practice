#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    int marks[3];
public:
    Student() {
        name = "";
        roll = 0;
        for (int i=0; i<3; i++) {marks[i] = 0;}
    }
    Student(string n, int r, int m[]) {
        name = n;
        roll = r;
        for (int i=0; i<3; i++) {marks[i] = m[i];}
    }
    ~Student() {}
    void setStudent(string n, int r, int m[]) {
        name = n;
        roll = r;
        for (int i=0; i<3; i++) {marks[i] = m[i];}
    }
    double getTotal() {
        double total = 0;
        for (int i = 0; i<3; i++) {total += marks[i];}
        return total;
    }
    double getAverage() {
        return getTotal()/3;
    }
    bool operator>(Student& other) {
        return getTotal() > other.getTotal();
    }
};

int main() {

}