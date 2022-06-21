## Doubly Linked List

### Structure of Doubly Linked List

```
struct Node {
    int data;
    Node *prev;
    Node *next;

    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};
```

### Advantages

-   Can be traversed in both the direction.
-   Given node can be deleted in O(1) time with given pointer/reference to it.
-   Insert/Delete operation before any node can be performed in O(1) time.
-   Insert/Delete operation from both ends can be performed in O(1) by maintaining tail pointer/reference.

### Disadvantages

-   Extra space is required for prev pointer.
-   Code Implementation can be complex.
