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
node* insert(node* root, int val){
    if(root== NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left= insert(root->left, val);

    }else{
        root->right= insert(root->right, val);
    }
    return root;
}
node* build_bst(vector<int>arr){
    node* root= NULL;
    for(int val: arr){
        root= insert(root, val);
    }
    return root;
}
void inorder(node* root){
    if(root== NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
int minDiffInBST(node* root) {
    node* prev= NULL;
    if(root== NULL){
        return INT8_MAX;
    }
    int ans= INT8_MAX;
    if(root->left!=NULL){
        int left_min= minDiffInBST(root->left);
        ans= min(ans, left_min);
    }
    if(prev!= NULL){
        ans= min(ans, root->data-prev->data);
    }
    prev= root;
    
    if(root->right!=NULL){
        int right_min= minDiffInBST(root->right);
        ans= min(ans, right_min);
    }
    return ans;
}
int main(){
    vector<int> arr= {3,2,1,5,6,4};
    node* root= build_bst(arr);
    inorder(root);
    cout<<endl;
    return 0;
}