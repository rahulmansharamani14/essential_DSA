/*
Write a function that takes the root of a binary Tree and returns the maximum of the Tree

Approach/Idea ->
So the idea is to traverse the given tree and for every node return maximum of 3 values. 
- root’s data.
- Maximum in node’s left subtree.
- Maximum in node’s right subtree.
and then return the maximum of root,left child,right child values

Time Complexity - O(n)
Auxiliary Space - O(h)
*/

#include <iostream>
#include <limits.h>

using namespace std;

struct TNode{
    int key;
    TNode *left, *right;

    TNode(int k){
        key = k;
        left = right = NULL;
    }
};

int findMax(TNode *root){
    if(root == NULL) return INT_MIN;

    return max(root->key,max(findMax(root->left),findMax(root->right)));
}

int main(){
    TNode *root = new TNode(10);
    root->left = new TNode(20);
    root->right = new TNode(30);
    root->right->left = new TNode(40);
    root->right->right = new TNode(50);

    cout<<findMax(root)<<endl;
    return 0;
}