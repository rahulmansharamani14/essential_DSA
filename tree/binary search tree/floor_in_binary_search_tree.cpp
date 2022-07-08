/* 
Floor of binary search tree is the element closet smallest or equal to the given element.

Time Complexity - O(h)
Auxiliaty Space - O(1) as this is iterative solution

Algorithm - 

1. Start at the root Node.
2 If root->data == key, then floor of the key is equal to the root.
3 Else if root->data > key, then the floor of the key must lie in the left subtree.
4 Else floor may lie in the right subtree but only if there is a value lesser than or 
equal to the key. If not, then the root is the key.

*/

#include <iostream>

using namespace std;

struct Node{
    int key;
    Node *left, *right;

    Node(int k){
        key = k;
        left = right = NULL;
    }
};

Node *floor(Node *root,int x){
    Node *res = NULL;

    while(root != NULL){
        if(root->key == x) return root;

        if(root->key > x){
            root = root->left;
        }else{
            res = root;
            root = root->right;
        }
    }
    return res;
}

int main(){
 	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);

    Node *res = floor(root,17);
    cout <<"Floor of binary search tree: " << res -> key << endl;
    return 0;
}