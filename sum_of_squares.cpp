#include<iostream>
using namespace std;

int main(){
    int n=5;
    int sum=0;

    for(int i=1;i<=n;i++){
        cout<<i<<"^2+";
        sum+=i*i;
    }

    cout<<"\b ="<<sum;
    return 0;
}