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
    void inorder(TreeNode* root, vector<int>&in) {
        if(root==NULL)return;
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>in1,in2;
        inorder(root1,in1);
        inorder(root2,in2);
        vector<int>res;
        int i=0,i1=0;
        int n=in1.size(),m=in2.size();
        while(i<n && i1<m){
            if(in1[i]<=in2[i1]){
                res.push_back(in1[i]);
                i++;
            }else {
                res.push_back(in2[i1]);
                i1++;
            }
        }
        while(i<n){
           res.push_back(in1[i]);
           i++; 
        }
         while(i1<m){
           res.push_back(in2[i1]);
           i1++; 
        }
        return res;
    }
    /*
    vector<int> ans;
    void deep(TreeNode* root){
         if(root->right){
            ans.push_back(root->right->val);
            deep(root->right);
         }
         if(root->left){
             ans.push_back(root->left->val);
             deep(root->left);
         }
         return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        if(root1!=NULL){
            ans.push_back(root1->val);
           deep(root1);
        }
        if(root2!=NULL){
           ans.push_back(root2->val);
           deep(root2);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    */
};