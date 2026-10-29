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
    if(head->next==NULL){
        return head->val;
    }
    if(head->next==NULL){
        return head->val+ head->next->val;
    }
    int pair_sum=0;
    ListNode* twin= head->next;
    while(twin->next!= NULL){
        twin= twin->next;
        pair_sum= max(pair_sum, head->val+ twin->val);


    }
    return pair_sum;
}
int main(){

}