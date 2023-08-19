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
 #include<climits>
class Solution {
public:
   bool isValidBST(TreeNode* root){
       return isValid(root,LONG_MIN, LONG_MAX);
   }
   bool isValid(TreeNode* root,long minval,long maxval){
        if(root==NULL){
            return true;
        }
        if(root->val >= maxval || root->val<=minval){return false;}
        return isValid(root->left,minval,root->val) && isValid(root->right,root->val,maxval);
   }
/*
    vector<int> inorder(TreeNode* root, vector<int>& Traversal){
        if(root==NULL){
            return Traversal;
        }
        inorder(root->left,Traversal);
        Traversal.push_back(root->val);
        inorder(root->right,Traversal);
        return Traversal;
    }
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> Traversal;
        return inorder(root, Traversal);
        
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans=inorderTraversal(root);
        vector<int> ans1=ans;
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1]){
                return false;
            }
        }
        return ans==ans1;
    }
    */
};