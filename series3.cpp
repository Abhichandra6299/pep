#include<iostream>
using namespace std;
int main(){
    int n=7;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<"+";
            sum=sum-i;
        }
        else{
            cout<<i<<"-";
            sum=sum+i;
        }
    }
    cout<<"\b ="<<sum;
    return 0;
}