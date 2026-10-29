#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val){
        data= val;
        next= NULL;
    }
};

class circularqueue{
    node* front;
    node* rear;
public:
    circularqueue(){
        front= rear= NULL;
    }
    void enqueue(int x){
        node* newnode= new node(x);
        if(front== NULL){
            front= rear=newnode;
            rear->next= front;
        }else{
            rear->next= newnode;
            rear= newnode;
            rear->next= front;
        }
    }
    void dequeue(){
        if(front== NULL){
            cout<<"queue is emtpy";
            return ;
        }
        if(front== rear){
            delete front;
            front= rear= NULL;
        }else{
            node* temp= front;
            front= front->next;
            rear->next= front;
            delete temp;
        }
    }
    void display(){
        if(front== NULL){
            return ;
        }
        node* temp= front;
        do{
            cout<<temp->data<<" ";
            temp= temp->next;
        }while (temp!= front);
        cout<<endl;
        
    }
};
int main(){
    circularqueue c;
    c.enqueue(5);
    c.enqueue(5);
    c.enqueue(5);
    c.enqueue(5);
    c.enqueue(5);
    c.display();
    return 0;
}