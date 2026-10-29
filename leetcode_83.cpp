#include <iostream>
using namespace std;
class node{
public: 
    int data;
    node* next;

    node(int val){
        data= val;
        next= nullptr;
    }
    node* deleteDuplicates(node* head) {
        node* temp= head;
        while(temp!= nullptr && temp->next!= nullptr){
            if(temp->next->data == temp->data){
            temp->next= temp->next->next;
            continue;
        }
        temp= temp->next;


    }
    return head;
    }

};
void print_list(node* head){
    node* temp= head;
    while (temp!= nullptr)
    {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"null";
    cout<<endl;
    
}
int main(){
    node* head=  new node(1);
     head->next=  new node(1);
     head->next->next=  new node(2);
     head->next->next->next=  new node(2);
     head->next->next->next->next=  new node(7);
    print_list(head);
    cout<<endl;
    node obj(0);
    head= obj.deleteDuplicates(head);
    print_list(head);
    
    return 0;
}