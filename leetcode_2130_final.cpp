#include <iostream>
#include <vector>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
int pairSum(ListNode* head) {
    //first we wil find the middle of the linked list using the slow and fast pointers
    ListNode* slow= head;
    ListNode* fast= head;
    while(fast!= NULL && fast->next!= NULL){
        slow= slow->next;
        fast= fast->next->next;
    }
    //now we have found the middle of the linked list which means we have two halves of the linked list and now we can reverse the second half of  the linked list and then we will take the twin sum
    ListNode*prev= NULL;
    ListNode* curr= slow;
    while(curr!= NULL){
        ListNode* next_node=curr->next;
        curr->next= prev;
        prev= curr;
        curr= next_node;
    }

    //now we will compute the twin sums
    int pair_sum= 0;
    ListNode* one= head;
    ListNode* second= prev;
    while(second!= NULL){
        pair_sum= max(pair_sum, one->val+ second->val);
        one= one->next;
        second= second->next;
    }
    return pair_sum;

}
int main(){

}
