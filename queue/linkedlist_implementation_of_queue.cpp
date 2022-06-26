/*
Linked List implementation of queue

Time Complexity : O(1) as we only change few pointers at a time
Auxiliary Space: O(1) as constant extra space is required

*/


#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


struct Queue{
    Node *front, *rear;
    int size;

    Queue(){
        front =  rear = NULL;
        size = 0;
    }

    void enqueue(int x){
        Node *temp = new Node(x);
        size++;
        if(front == NULL){ // if queue is empty
            front = rear = temp;
            return;
        }

        rear -> next = temp;
        rear = temp;
        
    }

    void dequeue(){
        Node *temp = front;

        if(front == NULL) return; // if queue is empty

        front = front ->next;

        if(front == NULL){ // Only one element was present in queue and now it's empty
            rear = NULL;
        }

        delete(temp);
        size--;
    }

    int getfront(){
        return front -> data;
    }

    int getrear(){
        return rear -> data;
    }

    int getsize(){
        return size;
    }
};



int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

   

    q.dequeue();
    q.enqueue(50);

    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
    cout<<q.getsize()<<endl;
    return 0;
}