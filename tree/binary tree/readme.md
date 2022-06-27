## Tree Data Structure

A tree whose elements have at most 2 children is called a binary tree

### Structure of Binary Tree

```
struct Node{
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key = k;
        left = right = NULL;
    }
};
```
