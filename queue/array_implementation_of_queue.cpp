/*
Array Implementation of Queue (we use array in a circular manner)

- Time Complexity of enqueue(), dequeue(), getfront(), getrear() are O(1).
- Auxilary Space is O(n) where n is the size of array elements

Note: The array here used is static array and has fixed size.

*/


#include <iostream>

using namespace std;

struct Queue{
    int capacity;
    int front;
    int size;
    int *arr;

    Queue(int c){
        capacity = c;
        arr = new int[capacity];
        front = 0;
        size = 0;
    }


    bool isEmpty() {
        return (size == 0);
    }

    bool isFull() {
        return (size == capacity);
    }

    int getfront() {
        if(isEmpty()) return -1;

        return arr[front];
    }

    int getrear() {
        if(isEmpty()) return -1;

        return arr[(front + size - 1) % capacity];
    }



    void enqueue(int x){
        if(isFull()) return;

        int rear = (front + size - 1) % capacity;
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
    }

    void dequeue(){
        if(isEmpty()) return;


        front = (front + 1) % capacity;
        size--;
    }

};



int main(){
    
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
   

    q.dequeue();

    cout<< q.getfront()<<endl;
    cout<< q.getrear()<<endl;

    return 0;
}