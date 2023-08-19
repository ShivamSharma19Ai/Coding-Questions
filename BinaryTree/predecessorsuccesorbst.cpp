// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
class Solution
{
    public:
    
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        Node* temp=root;
        while(root!=NULL){
            if(key>=root->key){
                root=root->right;
            }
            else{
                suc=root;
                root=root->left;
            }
        }
        while(temp!=NULL){
            if(key<=temp->key){
                temp=temp->left;
            }
            else{
                pre=temp;
                temp=temp->right;
            }
        }
        
    }
};