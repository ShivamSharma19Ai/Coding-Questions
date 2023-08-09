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
   int leftheight(TreeNode* root){
       if(root==NULL){
           return 0;
       }
       int lh=0;
       int rh=0;
       if(root->left){
       lh=leftheight(root->left);
       }
       if(root->right){
       rh=leftheight(root->right);
       }
       return 1+max(lh,rh);
   }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int lh=0;
        int rh=0;
        if(root->left){
           lh=leftheight(root->left);
        }
        if(root->right){
           rh=leftheight(root->right);
        }
        if(abs(lh-rh)>1){
            return false;
        }
        bool a=true;
        bool b=true;
        if(root->left){
           a=isBalanced(root->left);
        }
        if(root->right){
           b=isBalanced(root->right);
        }
        if(!a || !b){
            return false;
        }
        return true;
    }
};

