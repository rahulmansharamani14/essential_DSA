/*
Size of Binary Tree is the total numbers of nodes present in that Tree.

Method 1 -> Using Recursion

getSize(root)
1. If tree is empty then return 0
2. Else
     (a) Get the size of left subtree recursively  i.e., call 
          getSize( tree->left-subtree)
     (a) Get the size of right subtree recursively  i.e., call 
          getSize( tree->right-subtree)
     (c) Calculate size of the tree as following:
            tree_size  =  getSize(left-subtree) + getSize(right-
                               subtree) + 1
     (d) Return tree_size

Time Complexity - O(n)
Auxiliary Space - O(h)

Method 2 -> Using Level Order Traversal

getSizeQueue(root)
1. Create an empty queue q
2. Enqueue root node and intialize count = 0.
3. Create a curr pointer and *curr = q.front().
4. Loop while queue is not empty
    a) Dequeue a node from q.
    b) Enqueue curr's children (first left then right children) to q
    c) increment count by 1.

Time Complexity - O(n)
Auxiliary Space - O(w) where w is width of the binary tree
*/

#include <iostream>
#include <queue>

using namespace std;

struct TNode {
    int key;
    TNode *left, *right;

    TNode(int k){
        key = k;
        left = right = NULL;
    }
};

int getSize(TNode *root){
    if(root == NULL) return 0;

    return 1 + getSize(root->left) + getSize(root->right);
}

int getSizeQueue(TNode *root){
    if(root == NULL) return 0;

    queue<TNode *> q;
    int count = 0;
    q.push(root);

    while(!q.empty()){
        TNode *curr = q.front();
        q.pop();
        
        if(curr -> left != NULL) q.push(curr->left);
        if(curr -> right != NULL) q.push(curr->right);

        count++;
    }
    return count;
}



int main(){
    TNode *root = new TNode(10);
    root -> left = new TNode(20);
    root -> right = new TNode(30);
    root -> right -> left = new TNode(40);
    root -> right -> right = new TNode(50);

    cout<<"Size of binary tree: "<<getSize(root)<<endl;
    cout<<"Size of binary tree: "<<getSizeQueue(root)<<endl;
    return 0;
}