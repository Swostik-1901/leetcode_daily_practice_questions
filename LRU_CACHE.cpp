#include <iostream>
#include <unordered_map>
using namespace std;

class LRUCache{
public:
    class node{
    public:
        int key;
        int val;
        node* prev;
        node* next;
        node(int k, int v){
            key=k;
            val=v;
            prev=next=NULL;
        }
    };

    node* head=new node(-1,-1);
    node* tail=new node(-1,-1);
    unordered_map<int, node*> m;
    int limit;

    void addnode(node* newnode){
        node* oldnext= head->next;
        head->next= newnode;
        oldnext->prev= newnode;
        newnode->next= oldnext;
        newnode->prev=head;
    }

    void delnode(node* oldnode){
        node* oldprev= oldnode->prev;
        node* oldnext= oldnode->next;
        oldprev->next= oldnext;
        oldnext->prev= oldprev;
    }

    LRUCache(int capacity){
        limit= capacity;
        head->next= tail;
        tail->prev= head;//made a two way connection between the head and the tail;
    }

    int get(int key){
        if(m.find(key)==m.end()){
            return -1;
        }
        node*ansnode=m[key];
        int ans=ansnode->val;
        m.erase(key);
        delnode(ansnode);
        addnode(ansnode);
        m[key]=ansnode;
        return ans;
    }

    void put(int key, int val){
        if(m.find(key) != m.end()){
            node* oldnode= m[key];
            delnode(oldnode);
            m.erase(key);
        }
        if(m.size()==limit){
            //in this case we will need to deelete the least recenyly used data;
            m.erase(tail->prev->key);
            delnode(tail->prev);
        }
        node* newnode= new node(key, val);
        addnode(newnode);
        m[key]= newnode;
    }
};

int main(){
    LRUCache l1(2);
    l1.put(1,23);
    l1.put(2,2);
    cout<<l1.get(1);
    l1.put(3,456);
    l1.get(3);
    return 0;
}