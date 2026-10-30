#include <iostream>
using namespace std;
class ListNode{
public:
    int data;
    ListNode* next;
    ListNode(int val){
        data= val;
        next= nullptr;
    }
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->data=node->next->data;
        ListNode* temp= node->next;
        node->next= node->next->next;
        delete temp;

    }
};

int main(){

}