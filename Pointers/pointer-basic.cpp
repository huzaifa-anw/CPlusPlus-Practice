#include <iostream>
using namespace std;
int main() {

    int num = 5;
    int *ptrNum = &num;

    cout << "The number stored at the adress " << ptrNum << " is: " << *ptrNum << endl; 
    return 0;
}