#include<iostream>
using namespace std;
int main(){
    int n=4;
    double sum=0;
    for(int i=1;i<=n;i++){
        cout<<i<<"/"<<i+1<<"+";
        sum+=(double)i/(double)(i+1);
    }
    cout<<"\b ="<<sum;
    return 0;
}
