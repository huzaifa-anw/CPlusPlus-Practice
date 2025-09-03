#include <iostream>
using namespace std;
int main() {
    int arr[10] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};
    int size = sizeof(arr)/sizeof(int); // array size

    for(int *ptrArr = arr + (size - 1); ptrArr >= arr; ptrArr--) {
        cout << *ptrArr << endl;
    }

    return 0;
}