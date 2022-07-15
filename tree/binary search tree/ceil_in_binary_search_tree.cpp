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

Node *ceil(Node *root, int x){
    Node *res = NULL;
    
    while(root != NULL){
        if(root -> key == x)  return root;

        if(root -> key < x){
            root = root -> right;   
        }else{
            res = root;
            root = root -> left;
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

    Node *res = ceil(root,17);
    

    cout <<"Ceil of binary search tree: " << res -> key << endl;
    return 0;
}