## Tree Data Structure

A tree whose elements have at most 2 children is called a binary tree

A tree node contains -

-   data or key
-   pointer to the left child (\*left)
-   pointer to the right child (\*right)

### Structure of Binary Tree

```
struct Node{
    int key;
    Node *left;  // left pointer
    Node *right; // right pointer

    Node(int k){
        key = k;
        left = right = NULL;
    }
};
```

### Tree traversal

1. Breadth first Traversal (level order)
2. Depth First Traversal
    - Inorder traversal - left subtree, root, right subtree
    - Preorder traversal - root, left subtree, right subtree
    - Postorder traversal - left subtree, right subtree, root
