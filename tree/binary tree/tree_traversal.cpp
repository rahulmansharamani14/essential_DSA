/*
1. Inorder traversal -> Time Complexity is O(n) and Space Complexity is O(h)
2. Preorder traversal -> Time Complexity is O(n) and Space Complexity is O(h)
3. Postorder traversal -> Time Complexity is O(n) and Space Complexity is O(h)
*/


#include <iostream>

using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key = k;
        left = right = NULL;
    }
};

void inorder(Node *root){
    if(root != NULL){
        
        // recursion on left subtree
        inorder(root->left);

        // print the root node
        cout << root->key << " ";

        // recursion on right subtree
        inorder(root->right);
    }
}

void preorder(Node *root){
    if(root != NULL){
        
        // print the root node
        cout << root->key << " ";

        // recursion on left subtree
        preorder(root->left);

        // recursion on right subtree
        preorder(root->right);
    }
}

void postorder(Node *root){
    if(root != NULL){

        // recursion on left subtree
        postorder(root->left);

        // recursion on right subtree
        postorder(root->right);

        // print the root node
        cout << root->key << " ";
    }
}


int main(){
    
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root -> right -> left = new Node(40);
    root -> right -> right = new Node(50);

    cout <<"Inorder traversal: ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder traversal: ";
    preorder(root);
    cout<<endl;

    cout <<"Postorder traversal: ";
    postorder(root);
    cout<<endl;
    return 0;
}