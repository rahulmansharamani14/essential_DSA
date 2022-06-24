## Stack

-   Linear Data Structure
-   Follows LIFO (Last In First Out) Approach

### Operations on Stack

| Operation       | What it does                                       |
| --------------- | -------------------------------------------------- |
| push()          | Adds an item to the stack                          |
| pop()           | Remove an item from the stack                      |
| peek() or top() | Returns the top element of the stack               |
| IsEmpty()       | Returns true if the stack is empty otherwise false |
| size()          | Returns the size of the stack container            |

Note: Time complexity of operations like push(), pop(), peek(), isEmpty() are O(1).

### Boundary Conditions on Stack

1. Underflow -> When pop() or peek() called on empty stack
2. Overflow -> When push() called on full stack
