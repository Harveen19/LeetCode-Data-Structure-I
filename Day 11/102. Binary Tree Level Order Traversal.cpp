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
    vector<vector<int>> ans;
    void trav(TreeNode* root,int c){
        if(root==nullptr)
        return;

        if(ans.size() == c)
        ans.push_back(vector<int>());
        ans[c].push_back(root->val);
        c++;
        trav(root->left,c);
        trav(root->right,c);
    }
    vector<vector<int>> levelOrder(TreeNode* root){
        trav(root,0);
        return ans;
    }
};
