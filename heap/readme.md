## Heap

A Heap is a special Tree-based data structure in which the tree is a complete binary tree.

### Binary Heap

Binary Heap is a complete binary tree (Stored as an array) and traversed in level order.

Calculate index of the left child, right child and parent node by

-   left(i) = 2i + 1
-   right(i) = 2i + 2
-   parent(i) = [(i-1)/2]

### MinHeap

-   Complete binary tree
-   Every node has values smaller than its descendant
-   Internally represented as an array

### Applications of Heap Data Structure

-   Used in Heap Sort
-   Used to implement Priority Queue
