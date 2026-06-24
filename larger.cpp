#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 25;
    int *p1 = &a;
    int *p2 = &b;
    if (*p1 > *p2)
        cout << "Larger number = " << *p1;
    else
        cout << "Larger number = " << *p2;
    return 0;
}