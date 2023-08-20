#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int helper(TreeNode<int> *root, int X, int value){
    if(root==NULL){
        return value;
    }
    if(root->val==X){
       return root->val; 
    }
    if(root->val<X && root->val>value){
        value=root->val;
        return helper(root->right,X,value);
    }
    if(root->val>X){
        return helper(root->left,X,value);
    }

}

int floorInBST(TreeNode<int> * root, int X)
{
    return helper(root, X,0);
   
    // Write your code here.
}