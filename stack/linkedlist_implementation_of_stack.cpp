/*
This is the linked list implementation of stack where the stack grows and shrinks 
according to the needs at realtime.

Here, we do all the operations from starting of the linked list where head is given.
We could perform operations from the other end of the linked list if we maintain tail pointer.


Note: Time Complexity of all the operations is O(1).
*/

#include <iostream>
#include <limits.h>

using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


struct stack {
    Node *head;
    int size;

    stack(){
        head = NULL;
        size = 0;
    }

    void push(int x){
        Node *temp = new Node(x);

        temp -> next = head;
        head = temp;
        size++;
    }

    int pop(){
        if(head == NULL){
            //Underflow Condition
            return INT_MIN;
        }
        
        int res = head -> data;
        
        Node *temp = head;
        head = head -> next;
        delete temp;
        size--;
        return res;
    }


    int peek(){
        if(head == NULL){
            // Can't access the element because stack is empty
            return INT_MIN;
        }

        return head -> data;
    }

    int returnSize(){
        return size;
    }

    bool isEmpty(){
        return (size == 0);
    }
};

int main(){
    stack s;
    s.push(1);
    s.push(2);

    cout<<s.pop()<<endl;
    return 0;
}