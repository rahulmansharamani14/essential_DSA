## dequeue

A version of queue that allows insertion and deletion at both ends of the queue.

### Operations on dequeue

| Operation     | What it does                          |
| ------------- | ------------------------------------- |
| insertFront() | Adds an item to front of dequeue      |
| insertLast()  | Adds an item to rear of dequeue       |
| deleteFront() | Deletes an item from front of dequeue |
| deleteLast()  | Deletes an item from rear of dequeue  |

Note: Additional operations like getfront(), getrear(), isEmpty(), size() are also there with O(1) time complexity.

### Applications of dequeue

-   A dqueue can be used as both stack and queue
-   Maintianing history of actions (like maintaining browser's history)
-   Steal Process Scheduling Algorithm
-   Implementing priority queue with two types of priority
-   Maximum/Minimum of all subarrays of size k in an array
