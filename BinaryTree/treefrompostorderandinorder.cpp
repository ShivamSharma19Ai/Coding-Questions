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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(postorder.empty()) return nullptr;
        TreeNode* root = new TreeNode(postorder[postorder.size()-1]);
        int split = find(inorder.begin(), inorder.end(), postorder[postorder.size()-1]) - inorder.begin();


        vector<int> linorder(inorder.begin(), inorder.begin()+split);
        vector<int> lpostorder(postorder.begin(), postorder.begin()+linorder.size());
        root->left = buildTree(linorder,lpostorder);

        vector<int> rpostorder(postorder.begin()+linorder.size(), postorder.end()-1);
        vector<int> rinorder(inorder.begin()+split+1, inorder.end());
        root->right = buildTree(rinorder,rpostorder);

        return root;
    }
};