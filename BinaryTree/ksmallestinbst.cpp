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
    vector<int> helper(TreeNode* root, vector<int>& ans){
        if(root==NULL){
            return ans;
        }
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
        return ans;
    }
    vector<int> inorder(TreeNode* root){
        vector<int> ans;
        return helper(root,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans=inorder(root);
        //sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};