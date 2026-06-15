#include<iostream>
using namespace std;

int main(){
    int n=5;
    int sum=0;
    int fact=1;

    for(int i=1;i<=n;i++){
        fact*=i;
        cout<<i<<"!+";
        sum+=fact;
    }

    cout<<"\b ="<<sum;
    return 0;
}