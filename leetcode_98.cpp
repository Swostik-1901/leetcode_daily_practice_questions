//creating a binary search tree

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
bool helper(node* root, node* min, node* max){
    if(root== NULL){
        return true;
    }
    if(min!= NULL && root->data<= min->data){
        return false;
    }
    if(max!= NULL && root->data>= max->data){
        return false;
    }
    return helper(root->left, min, root)
    && helper(root->right, root, max);
}
bool isValidBST(node* root) {
    return helper(root, NULL, NULL);
}
int main(){
    vector<int> arr= {3,2,1,5,6,4};
    node* root= build_bst(arr);
    // inorder(root);
    // cout<<endl;
    cout<<isValidBST(root);
    return 0;
}