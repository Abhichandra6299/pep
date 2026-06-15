#include<iostream>
using namespace std;
int main(){
    int n=10;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i==n){
            cout<<i<<"=";
            sum=sum+i;
        }
        else{
            cout<<i<<"+";
        }
}
cout<<sum;
return 0;
}