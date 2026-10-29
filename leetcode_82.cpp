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
class linked_list{
public:
    node* head;
    linked_list(){
        head= NULL;
    }
    void insert(int val){
        node* newnode= new node(val);
        if(head== NULL){
            head=newnode;
            return;
        }
        node* temp= head;
        while(temp->next!= NULL){
            temp = temp->next;

        }
        temp->next= newnode;
    }
    node* delete_duplicate(node* head){
        if(head== NULL){
            return head;
        }
        node* curr= head;
        while (curr->next!= NULL)
        {
            if(curr->data== curr->next->data){
                node* dup= curr->next;
                curr->next= curr->next->next;
                delete dup;
            }else{
                curr= curr->next;
            }
        }
        return head;
        

    }
    void print(){
        node* temp= head;
        while(temp!= NULL){
            cout<<temp->data<<"->";
            temp= temp->next;

        }
        cout<<"NULL";
        cout<<endl;
    }
};


int main(){
    linked_list ll;
    ll.insert(1);
    ll.insert(1);
    ll.insert(0);
    ll.insert(0);
    ll.insert(2);
    ll.head= ll.delete_duplicate(ll.head);
    ll.print();
    return 0;
    
}