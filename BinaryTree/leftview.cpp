vector<int> recursion(Node *root, int level, vector<int> &res)
    {
        if(root==NULL) return res;
        if(res.size()==level) res.push_back(root->data);
        recursion(root->left, level+1, res);
        recursion(root->right, level+1, res);
        return res;
    }
vector<int> leftView(Node *root)
{ 
   vector<int> res;
        recursion(root, 0, res);
        return res;
   // Your code here
}