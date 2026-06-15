#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"enter a:";
    cin >> a ;
    cout<<"enter :b";
    cin>>b;

    if (a > b){
        cout << a << " is greater";
        return 0;
    }
    cout << b << " is greater";

    return 0;
}