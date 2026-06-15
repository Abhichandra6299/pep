#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"enter a:";
    cin >> a ;
    cout<<"enter :b";
    cin>>b;

    b=(a+b)-(a=b);
    cout << a << " " << b;
    return 0;
}