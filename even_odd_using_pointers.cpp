#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int *ptr = arr;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;

    return 0;
}