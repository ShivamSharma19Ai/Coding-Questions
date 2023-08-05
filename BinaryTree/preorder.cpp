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
    vector<int> preorderTrav(TreeNode* root,vector<int> & preorder){
        if(root==NULL){
            return preorder;
        }
        preorder.push_back(root -> val);
        preorderTrav(root->left,preorder);
        preorderTrav(root->right,preorder);
        return preorder;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        return preorderTrav(root, preorder);
    }
};