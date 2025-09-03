#include <iostream>
using namespace std;
int main() {
    int num = 55; // variable 
    int *ptrNum = &num;
    int **ptrPtrNum = &ptrNum;

    cout << **ptrPtrNum << endl;

    return 0;
}