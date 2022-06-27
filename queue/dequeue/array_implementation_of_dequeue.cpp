/*
Circular Array Implementation for Dequeue - Here we maintain a circular array with two
indexes front and rear.

Time Complexities - All operations have O(1) time complexity.
*/


#include <iostream>

using namespace std;

struct Dequeue{
    int front,size;
    int capacity;
    int *arr;

    Dequeue(int c){
        capacity = c;
        arr = new int[capacity];
        front = 0;
        size = 0;
    }

    bool isEmpty(){
        return (size == 0);
    }

    bool isFull(){
        return (size == capacity);
    }

    int getfront(){
        if(isEmpty()) return -1;

        return arr[front];
    }

    int getrear() {
        if(isEmpty()) return -1;

        return arr[(front + size - 1)% capacity];
    }

    void insertFront(int x){
        if(isFull()) return;

        front = (front - 1 + capacity) % capacity;
        arr[front] = x;
        size++;
    }

    void insertLast(int x){
        if(isFull()) return;

        int rear = (front + size - 1) % capacity;
        rear = (rear + 1)% capacity;
        arr[rear] = x;
        size++;
    }

    void deleteFront(){
        if(isEmpty()) return;

        front = (front + 1)% capacity;
        size--;
    }

    void deleteLast(){
        if(isEmpty()) return;

        size--;
    }
};

int main(){
    Dequeue dq(5);

    dq.insertLast(5);
    dq.insertLast(10);
    dq.deleteLast();
    dq.insertFront(15);
    dq.deleteFront();

    cout <<dq.getfront()<<endl;


    return 0;
}