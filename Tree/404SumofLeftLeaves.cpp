#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/sum-of-left-leaves/
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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        help(root, sum, false);
        return sum;
    }
    void help(TreeNode* root, int &sum, bool flag){
        if(!root) return;
        
        if(flag && !root->left && !root->right)
        {
            sum+=root->val; 
            return;
        }
        help(root->left, sum, true);
        help(root->right, sum, false);
        return;
    }
};

int main(){
    Solution ss;
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);
    root -> right -> right = new TreeNode(7);
    cout<<ss.sumOfLeftLeaves(root)<<endl;
    return 0;   
}