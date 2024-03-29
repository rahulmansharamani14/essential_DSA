/*
Time Complexity - O(h) for both recursive and iterative solution
Auxiliary Space for recursion - O(h)
Auxiliary Space for iterative - O(1)

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

bool searchNode(Node *root, int x){
    if(root == NULL) return false;

    if(root->key == x){
        return true;
    }else if(root->key > x){
        return searchNode(root->left,x);
    }else{
        return searchNode(root->right,x);
    }
}

bool searchNodeIterative(Node *root, int x){
    while(root != NULL){
        if(root->key == x){
            return true;
        }else if(root->key > x){
            root = root ->left;
        }else{
            root = root ->right;
        }
    }
    return false;
}

int main(){
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);

    if(searchNodeIterative(root,80)){
        cout << "Found"<<endl;
    }else{
        cout << "Not Found"<<endl;
    }
    return 0;
}