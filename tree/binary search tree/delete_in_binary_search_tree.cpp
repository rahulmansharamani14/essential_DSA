/*
Time Complexity - O(h)
Auxiliary Space - O(h)
*/

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;

    TreeNode(int x){
        val = x;
        left = right = NULL;
    }
};

TreeNode *getsuccesor(TreeNode *root){
        TreeNode *curr = root -> right;
        while(curr != NULL && curr->left !=NULL){
            curr = curr -> left;
        }
        return curr;
    }
    
    
    
TreeNode* deleteNode(TreeNode* root, int key) {
    //base case
    if(root == NULL) return root;
    
    if(root -> val > key){
        // search for key in left subtree
        root -> left = deleteNode(root -> left, key);
    }else if(root -> val < key){
        // search for key in right subtree
        root -> right = deleteNode(root -> right, key);
    }else{
        // root -> val is equal to key
        
        // node with only 1 child or no child
        if(root -> left ==  NULL){
            TreeNode *temp = root -> right;
            delete root;
            return temp;
        }else if(root -> right == NULL){
            TreeNode *temp = root -> left;
            delete root;
            return temp;
        }else{
            // node with both children
            TreeNode *succ = getsuccesor(root);
            root -> val = succ -> val;
            root -> right = deleteNode(root->right,succ -> val);
        }            
    }
    return root;
}

void inorder(TreeNode *root){
    if(root != NULL){
        inorder(root->left);
        cout << root -> val <<" ";
        inorder(root->right);
    }
}    

int main(){
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root ->left ->left = new TreeNode(2);
    root -> left ->right = new TreeNode(4);
    root->right->right = new TreeNode(7);

    root = deleteNode(root,3);
    
    inorder(root);
    return 0;
}