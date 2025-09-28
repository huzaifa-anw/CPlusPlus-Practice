#include <iostream>
using namespace std;

class TollBooth {
    private:
        unsigned int carCount;
        double moneyCollected;
    public:
        // constructor
        TollBooth() : carCount(0), moneyCollected(0) {} ;

        void payingCar() {
            carCount++;
            moneyCollected += 0.50;
        }

        void nopayCar() {
            carCount++;
        }

        void display() const {
            cout << "number of cars passed: " << carCount <<endl ;
            cout << "money collected: $" << moneyCollected <<endl ;
        }

};

int main () {
    TollBooth obj;
    char userChoice = ' ';
    cout << "Welcome to the toll booth" <<endl ;
    cout << "-------------------------" <<endl;
    while (userChoice != 'x') {
        cout << "press 'c' for a paying car  press 'z' for a non-paying car  press 'x' to exit" << endl ;
        cin >> userChoice;

        if (userChoice == 'c') {
            obj.payingCar();
        }
        else if (userChoice == 'z') {
            obj.nopayCar();
        }
        else if (userChoice == 'x') {
            obj.display();
            break;
        }
        else {
            cout << "Invalid input, try again." << endl;
        }
    }
    return 0;
}