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
    bool hasPathSum(TreeNode* root, int targetSum) {
        // base case
        if(root==nullptr){
            return {};
        }
        else if(root->val == targetSum && root->left == nullptr && root->right == nullptr){
            return true;
        }
        else{
            int newTarget=targetSum - root->val;
            return hasPathSum(root->left, newTarget) || hasPathSum(root->right, newTarget);
        }
    }
};
