#include<iostream>
using namespace std;
int main(){
    int n=21;
    int a[21]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    a[1]=0;
    for(int i=2;i<n;i++){
        for(int j=i;j*j<=n;j++){
            if(a[i]%j==0){
                a[i]==0;
            }
        }
    }
for(int i=1;i<n;i++){
    if(a[i]){
        cout<<a[i]<<" ";
    }
}
}