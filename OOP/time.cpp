#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

    public:
        // non parameterized constructor
        Time() : hours(0), minutes(0), seconds(0) {} ;
        // parameterized constructors
        Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

        void display() const {
            cout << "Time -> " << hours << ':' << minutes << ':' << seconds << endl;
        }   
        
        void addTime (Time obj1, Time obj2) {
            hours = obj1.hours + obj2.hours;
            minutes = obj1.minutes + obj2.minutes;
            seconds = obj1.seconds + obj2.seconds;

            if (seconds >= 60) {
                minutes++;
                seconds = seconds - 60;
            }
            if (minutes >= 60) {
                hours++;
                minutes = minutes - 60;
            }
            if (hours >= 24) {
                hours = hours % 24;
            }
        }
};

int main () {
    Time t1(11, 59, 59), t2(11, 59, 59);
    Time t3;
    t3.addTime(t1, t2);
    t3.display();

    return 0;
}