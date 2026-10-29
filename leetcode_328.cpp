#include <iostream>
#include <vector>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* oddEvenList(ListNode* head) {
    if(head== NULL || head->next == NULL || head->next->next== NULL){
        return head;
    }
        ListNode* odd_head= head;
        ListNode* even_head= head->next;
        ListNode* even_start= even_head;
        while(even_head!= NULL && even_head->next!= NULL){
            odd_head->next= odd_head->next->next;
            even_head->next= even_head->next->next;
            odd_head= odd_head->next;
            even_head= even_head->next;
        }
        odd_head->next= even_start;
        return head;

}
int main(){

}
