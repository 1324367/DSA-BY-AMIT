#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = 5, key = 20;
    int low = 0, high = n - 1, mid;
    bool found = false;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Found at index " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        cout << "Not found" << endl;

    return 0;
}
