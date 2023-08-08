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
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ans=1;
        if(root->right!=NULL){
            ans=max(ans,maxDepth(root->right))+1;
        }
        if(root->left!=NULL && maxDepth(root->left)>=ans){
            ans=maxDepth(root->left)+1;
        }
        return ans;
    }
};