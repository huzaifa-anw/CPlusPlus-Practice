#include <iostream>
#include <cctype>
using namespace std;

class Angle {
    private:
        int degrees;
        float minutes;
        char direction;

    public:
        Angle(int d, float m, char dir) : degrees(d), minutes(m), direction(dir) {}
        Angle() : degrees(0), minutes(0.0), direction('N') {}

        void getAngle() {
            cout << "Enter angle values, Degrees, Minutes, Direction: " ;
            cin >> degrees;
            while (degrees > 360)
            {
                cout << "Invalid degree value!!!" << endl;
                cin >> degrees;
            }

            cin >> minutes;
            while (minutes > 60)
            {
                cout << "Invalid minutes value!!!" << endl;
                cin >> minutes;
            }

            cin >> direction;
            direction = toupper(direction);
            while (direction != 'N' && direction != 'E' && direction != 'W' && direction != 'S')
            {
                cout << "Invalid direction!!!" << endl;
                cin >> direction;
            }
        }

        void displayAngle() {
            cout << degrees << '\xF8' << minutes << '\'' << ' ' << direction << endl;
        }
};


int main () {

    Angle a1;
    a1.getAngle();
    a1.displayAngle();
    return 0;
}