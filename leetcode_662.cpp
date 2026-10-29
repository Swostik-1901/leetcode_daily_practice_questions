 #include <iostream>
#include <vector>
#include <queue>
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
// static int idx= -1;
node* buildtree(const vector<int>& preorder, int& idx){
    idx++;
    if(idx>preorder.size() || preorder[idx]== -1){
        return NULL;
    }

    node* root= new node(preorder[idx]);
    root->left= buildtree(preorder,idx);//LEFT subtree of the bninary tree
    root->right= buildtree(preorder, idx); // RIGHT subtree of the binary tree 
    return root;
}//for getting the maximum width of the binary tree, first we need to have a binary tree, so we will creat a binary tree using the normal recursion process
int widthOfBinaryTree(node* root) {
    queue<pair<node*, unsigned long long>> q;
    q.push({root,0});
    int max_width=0;
    while (q.size()>0)
    {
        int curr_level_size= q.size();
        unsigned long long start_index= q.front().second;
        unsigned long long end_index= q.back().second;
        max_width= max(max_width, (int)(end_index-start_index+1));
        for(int i=0;i<curr_level_size;i++){
            auto curr= q.front();
            q.pop();
            
            if(curr.first->left){
                q.push({curr.first->left, curr.second*2+1});

            }
            if(curr.first->right){
                q.push({curr.first->right, curr.second*2+2});

            }
        }
    }
    return max_width;
    
}
int main(){
    vector<int> preorder= {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx=-1;
    node* root= buildtree(preorder, idx);
    int width = widthOfBinaryTree(root);
    cout<<width;
    return 0;
     
    // r/eturn 0; 
}