#include<iostream>
using namespace std;
int main(){
    int n=10;
    int sum=0;
    for(int i=1;i<=n;i++){
        cout<<i<<"+";
        sum+=i;
        }
cout<<"\b ";
cout<<"\b= "<<sum;
return 0;
}