#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/search-in-a-binary-search-tree/
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{
    public:
    TreeNode* searchInBST(TreeNode* root, int val){
        if(root == NULL)
        return NULL;
        TreeNode* dummy = new TreeNode();

        if(val < root -> val)
        dummy = searchInBST(root -> left, val);
        else if(val > root -> val)
        dummy = searchInBST(root -> right, val);
        else
        dummy = root;

        return root;
    }
    
    TreeNode* searchBST2(TreeNode* root, int val) { 
      if(!root) return NULL;
      if(root->val == val) return root;
      if(root->val < val) return searchBST2(root->right, val);
      else return searchBST2(root->left, val);
    }
};

int main(){
    Solution ss;
    TreeNode* root = new TreeNode(4);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(5);
    root -> left -> left = new TreeNode(1);
    root -> left -> right = new TreeNode(3);
    root -> right -> left = new TreeNode(6);
    root -> right -> right = new TreeNode(7);
    TreeNode* dummy = ss.searchInBST(root, 3);
    cout<<dummy -> val;
    return 0;
}