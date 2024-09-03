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
    int dfs(TreeNode* root, bool &ans) {
        if(!root) return 0;
        
        int left = dfs(root->left, ans);
        int right = dfs(root->right, ans);
        
        if(abs(right - left) > 1) ans = false;
        return max(left+1, right+1);
    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        dfs(root, ans);
        return ans;
    }
};