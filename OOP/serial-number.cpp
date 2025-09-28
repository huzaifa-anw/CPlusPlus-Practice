#include <iostream>
using namespace std;

class SerialNumber {
    private:
        int serialNum;
        static int objectCount;
    
    public:
        SerialNumber () {
            serialNum = objectCount;
            objectCount++;
        }
        void Report () {
            cout << "i am object number " << serialNum << endl;
        }

};

int SerialNumber::objectCount = 1;

int main () {
    SerialNumber o1, o2, o3;
    o1.Report();
    o2.Report();
    o3.Report();
    return 0;
}