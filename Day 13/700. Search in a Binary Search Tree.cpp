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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==nullptr){
            return {};
        }
        if(root->val==val){
            return root;
        }

        // val > key(if the data of root becomes greater than key  then we'll search in left subtree of root)
        if(root->val > val){
            return searchBST(root->left,val);
        }

        // val < key
        return searchBST(root->right,val);
    }
};
