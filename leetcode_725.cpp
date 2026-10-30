#include <iostream>
#include <vector>
using namespace std;
class node{
public:
    node* next;
    int data;
    node(int val){
        data= val;
        next= nullptr;
    }
};
class Solution {
public:
    int count_nodes(node* head){
        node* temp= head;
        int count=0;
        while(temp->next!= nullptr){
            count++;
            temp= temp->next;
        }
        return count;
    }
    vector<node*> splitListToParts(node* head, int k) {
        int number_of_nodes= count_nodes(head);
        vector<vector<int>> splitted_ll;
        int part_size= number_of_nodes/k;
        int extra= number_of_nodes%k;
        node* curr= head;
        for(int i=0;i<k;i++){
            int current_part_size= part_size;
            if(extra>0){
                current_part_size++;
                extra--;
            }
            vector<int> part;
            for(int j=0;j<current_part_size && curr!= nullptr;j++){
                part.push_back(curr->data);
                curr= curr->next;
            }
            splitted_ll.push_back(part);
        }
        for(auto &row: splitted_ll){
            for(int x: row){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        vector<node*> result;
        curr= head;
        part_size= number_of_nodes/k;
        extra= number_of_nodes%k;
        for(int i=0;i<k;i++){
            int current_part_size= part_size;
            if(extra>0){
                current_part_size++;
                extra--;
            }
            if(curr== nullptr){
                result.push_back(nullptr);
                continue;
            }
            node* part_head= curr;
            for(int j=1;j<current_part_size;j++){
                curr= curr->next;
            }
            node* next_part= curr->next;
            curr->next= nullptr;
            result.push_back(part_head);
            curr= next_part;
        }
        return result;
        
        

    }
};
int main(){

}