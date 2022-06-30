/*
Level order traversal or Breadth First traversal of binary tree

Aproach/Idea -> For each node, first, the node is visited and then it’s child nodes 
are put in a queue. 

Algorithm -> 
printLeveLOrder(root)
1. Create an empty queue q
2. Push the root node into the queue.
3. Create a curr pointer and *curr = q.front().
4. Loop while queue is not empty
    a) print curr->data.
    b) Enqueue curr's children (first left then right children) to q
    c) Dequeue a node from q.

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

void printLeveLOrder(TNode *root){
    if(root == NULL) return;

    // Create empty queue for level order traversal
    queue<TNode*> q;

    // enqueue root node
    q.push(root); 

    while(!q.empty()){
        
        // Print front of queue and remove it from queue
        TNode *curr = q.front();
        cout<<curr->key<< " "; 
        q.pop(); 

        // enqueue left child
        if(curr -> left != NULL)   q.push(curr -> left);

        // enqueue right child
        if(curr -> right != NULL)  q.push(curr -> right);
    }

}

int main(){
    TNode *root = new TNode(10);
    root -> left = new TNode(20);
    root -> right = new TNode(30);
    root -> right -> left = new TNode(40);
    root -> right -> right = new TNode(50);

    printLeveLOrder(root);

    return 0;
}