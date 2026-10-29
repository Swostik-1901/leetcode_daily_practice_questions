#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class TreeNode{
public:
    TreeNode* left;
    TreeNode* right;
    int data;
    TreeNode* next;
    TreeNode(int val){
        data= val;
        next= NULL;

    }

};
class Solution{
public: 
    
    int search(vector<int>& inorder, int left, int right, int val){
        for(int i= left;i<= right; i ++){
            if(inorder[i]== val){
                return i;
            }
        }
        return -1;
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int left,int& pre_idx, int right){
        if(left>right){
            return NULL;
        }
        TreeNode* root= new TreeNode(preorder[pre_idx]);
        
        int inorder_idx= search(inorder, left, right, preorder[pre_idx]);
        pre_idx++;

        root->left= helper(preorder, inorder,left,pre_idx, inorder_idx-1);
        root->right= helper(preorder, inorder, inorder_idx + 1, pre_idx, right);
        return root;
    }
    TreeNode* buildtree(vector<int>& preorder, vector<int>& inorder){
        int pre_idx=0;
       return helper(preorder, inorder,0,pre_idx, inorder.size()-1 );
    }
    
};
void printInorder(TreeNode* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main() {
    // Example input: preorder and inorder traversals of a binary tree
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder  = {9, 3, 15, 20, 7};

    Solution sol;
    TreeNode* root = sol.buildtree(preorder, inorder);

    cout << "Inorder traversal of constructed tree: ";
    printInorder(root);
    cout << endl;

    return 0;
}
