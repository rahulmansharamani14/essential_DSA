/*
This is normal array implementation of stack where array size is not dyanamic which means 
it doesn't grow and shrink deepending on the needs at runtime.
*/

#include <iostream>
using namespace std;

struct stack{
    int *arr;
    int capacity;
    int top;

    stack(int c){
        capacity = c;
        arr = new int[capacity];
        top = -1;
    }


    void push(int x){

        if(top == capacity - 1){
            // Overflow Condition
        }

        top++;
        arr[top] = x;
    }

    int pop(){

        if(top == -1){
            // Underflow Condition
        }

        int res = arr[top];
        top--;
        return res;
    }

    int peek(){

        if(top == -1){
            // Can't access the element because stack is empty
        }

        return arr[top];
    }

    int size(){
        return top + 1;
    }

    bool isEmpty(){
        return top == -1;
    }
};


int main(){

    stack s(5);
    
    s.push(1);
    s.push(2);
    s.push(3);
    

    cout<<s.peek()<<endl;

    return 0;
}