#include <iostream>
#include <vector>
using namespace std;
class node{
public: 
    int data;
    node* left;
    node* right;
    node(int val){
        data= val;
        left= right= NULL;
    }
};
node* buildtree(vector<int>& preorder, int& idx) {
    idx++;
    if (idx >= preorder.size() || preorder[idx] == -1) {
        return NULL;
    }

    node* root = new node(preorder[idx]);
    root->left = buildtree(preorder, idx);
    root->right = buildtree(preorder, idx);
    return root;
}//for checking whether the given two binary trees are identical or not we  first need to build the two binary trees , so we will build them using the normal recursion process

bool is_identical(node* p, node* q){
    if(p==NULL || q==NULL){
        if(p==q){
            return true;
        }else{
            return false;
        }
    }
    bool is_left_same= is_identical(p->left, p->left);
    bool is_right_same= is_identical(p->right, p->right);
    if(is_left_same, is_right_same, p->data== q->data){
        return true;
    }else{
        return false;
    }
}

int main(){
    vector<int> preorder_1= {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int index_1=-1;
    vector<int> preorder_2= {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int index_2=-1;
    node* root_1= buildtree(preorder_1,index_1);
    node* root_2= buildtree(preorder_2,index_2);
    if(is_identical(root_1, root_2)){
        cout<<"both the trees are identical";
    }else{
        cout<<"the trees are not identical";
    }
 
    return 0;
}