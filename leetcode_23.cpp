#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class ListNode{
public:
    ListNode* next;
    int val;
    ListNode(int data){
        val= data;
        next= nullptr;
        
    }
};
class Solution {
public:
   
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        sort(lists.begin(), lists.end());
        ListNode* head= nullptr;
        ListNode* tail= nullptr;
        for(int i=0;i<lists.size();i++){
            ListNode* newnode= new ListNode(lists[i]->val);
            if(head== nullptr){
                head= newnode;
                tail= newnode;
            }else{
                tail->next= newnode;
                tail= newnode;
            }

        }
        return head;
    }
};
int main(){

}
