#include <iostream>
#include <vector>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public: 
    ListNode* reverselist(ListNode* node){
            ListNode* previous= nullptr;
            ListNode* current= node;
            ListNode* next_node;

            while(current!= nullptr){
                next_node= current->next;
                current->next= previous;
                previous= current;
                current= next_node;
            }
            return previous;
        }

    ListNode* doubleIt(ListNode* head){
        //first we will reverse the linked list
        ListNode* reversed_list= reverselist(head);
        int carr= 0;
        ListNode* current= reversed_list;
        ListNode* previous= nullptr;

        while(current!= nullptr){
            int new_val= current->val*2+ carr;
            current->val= new_val%10;
            if(new_val>9){
                carr= 1;
            }else{
                carr= 0;
            }
            previous= current;
            current= current->next;
        }
        if(carr!=0){
            ListNode* extranode=new ListNode(carr);
            previous->next= extranode;
        }
        ListNode* result=  reverselist(reversed_list);

        return result;
        
    }
};
int main(){

}