#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int yearsAffiliated;
    int rating;

public: 
    // constructors
    Employee() = default;
    Employee(string n, int y, int r) : name(n), yearsAffiliated(y), rating(r) {};
    //abstract function
    virtual void askForPromotion() = 0;

    // getters 
    string getName(){
        return name;
    }

    int getYearsAffiliated() {
        return yearsAffiliated;
    }

    int getRating() {
        return rating;
    }
};

class AmazonEmployee : public Employee{    

public:
    using Employee::Employee;
    void askForPromotion() override {
        int yearsAffiliated = getYearsAffiliated();
        if (yearsAffiliated > 2) {
            cout << getName() << " has been promoted" << endl;
        }
        else {
            cout << "sorry, " << getName() << " can not be promoted" << endl;
        }
    }
};

class MetaEmployee : public Employee {

public:
    using Employee::Employee;
    void askForPromotion() override {
        int rating = getRating();
        if (rating >= 8) {
            cout << getName() << " has been promoted" << endl;
        }
        else {
            cout << "sorry, " << getName() << " can not be promoted" << endl;
        }
    }
};

int main() {
    AmazonEmployee e1("huzaifa", 5, 8);
    e1.askForPromotion();

    MetaEmployee e2("umar", 2, 8);
    e2.askForPromotion();

    MetaEmployee e3("ahmed", 2, 7);
    e3.askForPromotion();
}