#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;
    int *ptr = arr;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == key) {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Element not found";

    return 0;
}