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
class solution{
    int head;
    
public:
    node* rotate_right(node* head, int k){
        int len= 1;
        if(head== nullptr || head->next== nullptr){
            return head;
        }
        node* count= head;
        while(count->next!= nullptr){
            len++;
            count= count->next;
        }
        len++;

        k= k%len;
        if(k==0){
            return head;
        }

        node* p =head;
        for(int i=0; i<(len-k-1); i++){
            p= p->next;
        }
        count->next= head;
        head= p->next;
        p->next= nullptr;

        return head;
        
    }
};
int main(){

}