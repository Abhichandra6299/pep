#include<iostream>
using namespace std;
#define max 50
int stack[max];
    int top=-1;
void push(int x){
        if(top==max){
            cout<<"stack overflow"<<endl;
        }
        else{
            top++;
            stack[top]=x;
        }
    }
    int pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }
        else{
            int x=stack[top];
            top--;
            return x;
        }
    }
    void display(){
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<" ";
        }
    }
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    cout<<"popped element:"<<pop()<<endl;
    cout<<"popped element:"<<pop()<<endl;
    display();
    return 0;
}