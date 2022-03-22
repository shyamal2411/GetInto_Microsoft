#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/maximum-depth-of-binary-tree/
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        
//         base case
        if(root == NULL)
            return 0;
        
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};

// main function
int main(){
    Solution ss;
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);
    root -> right -> right = new TreeNode(7);
    cout<<ss.maxDepth(root)<<endl;
    return 0;
}