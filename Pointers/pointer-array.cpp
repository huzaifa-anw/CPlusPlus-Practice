#include <iostream>
using namespace std;
int main () {
    
    int arr[5] = {2,4,6,8,10};
    int *ptr = arr;
    for (int i = 1; i <= sizeof(arr)/sizeof(int); i++) {
        cout << "Element " << i << " : " << *ptr << endl;
        ptr++;
    }

    return 0;
}