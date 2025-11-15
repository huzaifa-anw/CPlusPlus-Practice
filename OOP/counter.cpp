#include <iostream>
using namespace std;

class Counter {
    unsigned int count;

    public:
    Counter(int c) : count(c) {}
    Counter(){};

    void setCount(int c) {
        if (c >= 0) count = c;
        else cout << "count cant be less than 0" << endl;
        
    }

    void increment() {
        count++;
    }
    
    void decrement() {
        count--;
    } 

    void show()  {
        cout << "Count: " << count << endl ;
    }

};

int main () {
    Counter c(5);
    c.increment(); // 6
    c.increment(); // 7
    c.decrement(); // 6
    c.show();
    c.setCount(-1);

    return 0;
}