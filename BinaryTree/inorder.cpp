class Solution {
public:
    vector<int> inOrderTrav(TreeNode * curr, vector < int > & inOrder) {
        if (curr == NULL)
            return inOrder;

        inOrderTrav(curr -> left, inOrder);
        inOrder.push_back(curr -> val);
        inOrderTrav(curr -> right, inOrder);
        return inOrder;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inOrder;
       return inOrderTrav(root, inOrder);    
    }
};