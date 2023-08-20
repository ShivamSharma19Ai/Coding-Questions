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
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans=inorder(root);
        int i=0;
        int j=ans.size()-1;
        int sum=ans[i]+ans[j];
        while(i<j){
            sum=ans[i]+ans[j];
            if(sum==k){
                return true;
            }
            if(sum<k){
                i++;
            }
            if(sum>k){
                j--;
            }
        }
        return false;
    }
};