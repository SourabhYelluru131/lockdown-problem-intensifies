//  https://leetcode.com/problems/sum-of-left-leaves/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum=0;
    void dfs(TreeNode* curr){
        if(curr->left){
            if(!curr->left->left && !curr->left->right) sum += curr->left->val;
            dfs(curr->left);
        }
        if(curr->right) dfs(curr->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        dfs(root);
        return sum;
    }
};
