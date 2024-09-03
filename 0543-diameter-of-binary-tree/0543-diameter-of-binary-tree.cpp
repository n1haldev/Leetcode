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
    private:
    int maxi = 0;
public:
    int diameter(TreeNode* root) {
        if(!root) return 0;
        
        int left = diameter(root->left);
        int right = diameter(root->right);
        
        int max = left + right;
        maxi = (maxi > max) ? maxi : max;
        
        return 1 + ((left > right) ? left : right);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        diameter(root);
        
        return maxi;
    }
};