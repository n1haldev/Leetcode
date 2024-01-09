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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 0)
            return NULL;
        
        auto max_iter = max_element(nums.begin(), nums.end());
        int max_ele = *max_iter;
        int max_ind = distance(nums.begin(), max_iter);
        
        vector<int> leftslice;
        vector<int> rightslice;
        
        for(int i = 0;i < max_ind; i++) {
            leftslice.push_back(nums[i]);
        }
        for(int i = max_ind + 1;i < nums.size(); i++) {
            rightslice.push_back(nums[i]);
        }

        
        TreeNode* temp = new TreeNode(max_ele, constructMaximumBinaryTree(leftslice), constructMaximumBinaryTree(rightslice));
        
        return temp;
    }
};