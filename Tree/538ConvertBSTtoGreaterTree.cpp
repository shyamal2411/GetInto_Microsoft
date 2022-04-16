#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/convert-bst-to-greater-tree/
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
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if(root == NULL)
            return NULL;
        convertBST(root -> right);
        sum += root->val;
        root->val = sum;
        convertBST(root->left);
        
        return root;
    }
};

int main(){
    Solution ss;
    TreeNode* root = new TreeNode(5, new TreeNode(2, new TreeNode(1), new TreeNode(3)), new TreeNode(13, new TreeNode(7, new TreeNode(6), new TreeNode(8)), new TreeNode(14)));
    TreeNode* res = ss.convertBST(root);
    return 0;
}