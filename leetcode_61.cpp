#include <iostream>
#include <algorithm>
#include <vector>
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
class solution{
    node* head;
    node* tail;
public:
    solution(){
        head= tail= NULL;
    }
    vector<int> elements_ll;
    void convert_to_array(){
        node* temp= head;
        while(temp!= NULL){
            elements_ll.push_back(temp->data);
            temp= temp->next;            
        }
    }
    node* rotate_right(node*head, int k){
        int n= elements_ll.size();
        if(n==0){
            return;
        }
        k=k%n;
        reverse(elements_ll.begin(), elements_ll.end()+k);
        reverse(elements_ll.begin()+k, elements_ll.end());
        reverse(elements_ll.begin(), elements_ll.end());
        
        node* newhead= new node(elements_ll[0]);
        node* curr= newhead;
        for(int i=1;i<n; i++){
            curr->next= new node(elements_ll[i]);
            curr= curr->next;
        }
        return newhead;
    }
};
int main(){
    solution s;

}