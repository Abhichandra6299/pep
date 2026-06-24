#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* top =NULL;
node* temp;
void push(int x){
    if(top==NULL){
        temp=new node();
        temp->data=x;
        top=temp;
        temp->next=NULL;
    }
    else{
        temp=new node();
        temp->data=x;
        temp->next=top;
        top=temp;
       
    }
}
void pop(){
    temp=top;
    top=top->next;
    delete temp;
}

void display(){
    temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    push(10);
    push(20);
    pop();
    pop();
    push(30);
    push(40);
    push(50);
    display();
}