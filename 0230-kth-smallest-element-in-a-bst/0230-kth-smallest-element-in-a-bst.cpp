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
    int helper(TreeNode* cur, int &fake_k, int k) {
        if(!cur) return -1;
        
        int left = helper(cur->left, fake_k, k);
        fake_k++;
        if(fake_k == k) {
            return cur->val;
        }
        
        int right = helper(cur->right, fake_k, k);
        return (left > right) ? left : right;
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int temp = 0;
        return helper(root, temp, k);
    }
};