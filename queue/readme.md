## Queue

-   Linear Data Structure just like stack
-   Follows FIFO (First In First Out) Approach which means the element that is inserted first in the queue will be first one to remove from the queue.

### Operations on Queue

| Operation      | What it does                                       |
| -------------- | -------------------------------------------------- |
| enqueue(int x) | Adds an item x to the queue                        |
| dequeue()      | Remove an item from the queue                      |
| getfront()     | Returns the front item from the queue              |
| getrear()      | Returns the rear item from the queue               |
| size()         | Returns the size of the queue                      |
| isEmpty()      | Returns true if the queue is empty otherwise false |

Note: Time complexity of operations like enqueue(), dequeue(), getfront(), getrear(), isEmpty() are O(1) as there is no loop involved.

### Queue is used in the situations like ->

-   when a single resource is shared among multiple consumers
-   synchronization between slow and fast devices (asychronous process)

### Applications of Queue

-   In Operating System (Semaphors, FCFS Scheduling i.e. First come First serve, Spooling, buffers for devices like keyboard)

-   In Computer Networks (Routers/Switches and Mail queue)

### Variations of queue

-   Dequeue
-   Priority queue
-   Doubly Ended Priority queue
