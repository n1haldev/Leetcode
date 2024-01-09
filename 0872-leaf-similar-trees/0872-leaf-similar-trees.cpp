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
    vector<int> returnLeaves(TreeNode* root1) {
        vector<int> leaves;
        
        stack<TreeNode*> nodeStack;
        nodeStack.push(root1);
        
        while(nodeStack.empty() == false) {
            TreeNode* temp = nodeStack.top();
            if(temp->left == NULL && temp->right == NULL) {
                leaves.push_back(temp->val);
            }
            nodeStack.pop();
            
            if(temp->right) {
                nodeStack.push(temp->right);
            }
            if(temp->left) {
                nodeStack.push(temp->left);
            }
        }
        
        return leaves;
    } 
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1 = returnLeaves(root1);
        vector<int> leaves2 = returnLeaves(root2);
        
        if(leaves1.size() != leaves2.size()) {
            return false;
        }
        else {
            for(int i = 0;i < leaves1.size(); i++) {
                if(leaves1[i] != leaves2[i]) 
                    return false;
            }
        }
        
        return true;
    }
};