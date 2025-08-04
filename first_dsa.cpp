#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 1, 9, 3};
    int n = 5, key = 9;
    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            cout << "Element found at index " << i << endl;
            break;
        }
    }

    if(!found)
        cout << "Element not found" << endl;

    return 0;
}
