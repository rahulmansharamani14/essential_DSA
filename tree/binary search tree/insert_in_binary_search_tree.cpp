/*
Time Complexity - O(h)
Auxiliary Space - O(h)
*/

#include <iostream>

using namespace std;

struct Node {
    int key;
    Node *left, *right;

    Node(int k){
        key = k;
        left = right = NULL;
    }
};

Node *insertNodeRecursive(Node *root,int x){
    if(root == NULL){
        return new Node(x);
    }

    if(root->key > x){
        root -> left = insertNodeRecursive(root->left,x);
    }else if(root->key < x){
        root -> right = insertNodeRecursive(root->right,x);
    }
    
    return root;
}

void inorder(Node *root){
    if(root != NULL){
        inorder(root->left);
        cout << root -> key <<" ";
        inorder(root->right);
    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    root = insertNodeRecursive(root,5);
    
    inorder(root);
    return 0;
}