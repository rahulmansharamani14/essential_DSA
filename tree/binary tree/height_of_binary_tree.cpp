/*
Time Complexity - O(n) 
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

int height(Node *root){
    // if Tree is empty, height will be 0
    if(root == NULL) return 0;

    // recursion for the left subtree and the right subtree and comparing their max depth
    return max(height(root->left), height(root->right)) + 1;
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout <<"Height of binary tree: " << height(root) << endl;
    return 0;
}