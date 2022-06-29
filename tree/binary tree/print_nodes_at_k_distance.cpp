/*
Given a binary tree. Write a function that takes root and k as a parameter, whose return 
type is void and is supposed to print the nodes at distance k from the root.

Approach/Idea -> 

1. Check if the root is NULL.
2. Check if k is 0,then print the root node.
3. Check if k != 0, then recursivly call the function with k - 1 distance both for left
subtree and right subtree.

Time Complexity - O(n)
Auxiliary Space - O(h)
*/

#include <iostream>

using namespace std;

struct TNode {
    int key;
    TNode *left, *right;

    TNode(int k){
        key = k;
        left = right = NULL;
    }
};


void print_K_Distance(TNode *root, int k){
    if (root == NULL) return;

    if(k == 0){
        // print the root node
        cout << root->key << endl;
    }else{
        // recursion for k-1 distance for left subtree
        print_K_Distance(root -> left, k - 1);

        // recursion for k-1 distance for right subtree
        print_K_Distance(root -> right, k - 1);
    }
}

int main(){
    TNode *root = new TNode(10);
    root->left = new TNode(20);
    root->right = new TNode(30);
    root->right->left = new TNode(40);
    root->right->right = new TNode(50);

    print_K_Distance(root, 2);


    return 0;
}