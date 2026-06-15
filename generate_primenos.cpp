#include<iostream>
using namespace std;

int main() {
    int a[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    a[1] = 0;

    for(int i = 2; i <= 20; i++) {
        if(a[i] == 0)
            continue;

        if(a[i] * a[i] > 20)
            break;

        for(int j = a[i] * 2; j <= 20; j += a[i]) {
            a[j] = 0;
        }
    }

    for(int i = 1; i <= 20; i++) {
        if(a[i] != 0)
            cout << a[i] << " ";
    }

    return 0;
}