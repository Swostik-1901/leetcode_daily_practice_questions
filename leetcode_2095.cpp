#include <iostream>
#include <vector>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* deleteMiddle(ListNode* head) {
    if(head== nullptr || head->next== nullptr){
        return nullptr;
    }
    ListNode* slow= head;
    ListNode* fast= head;
    ListNode* prev= nullptr;
    while(fast!= NULL && fast->next!= NULL){
        prev= slow;
        slow= slow->next;
        fast= fast->next->next;
    }
    prev->next= slow->next;
    delete slow;
    return head;

}