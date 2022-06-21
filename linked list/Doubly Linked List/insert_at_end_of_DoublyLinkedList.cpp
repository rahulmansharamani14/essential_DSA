/*
Problem -> Write a function insertEnd(Node *head, int x) which inserts element x 
at the end of the list and returns the head of the list.

Idea/Approach -> 
1. Create a temp node of element x.
2. If head == NULL, return temp as the new head.
3. Initialize a curr pointer and loop through the list with the condition (curr -> next != NULL) and hold on to the last node.
4. Now point the next of the last node to temp and prev of temp to last node and return head (Note: head doesn't change in this case).
*/

#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;

    Node(int x){
        data = x;
        prev = next = NULL;
    }
};

Node *insertEnd(Node *head, int x){

    Node *temp = new Node(x);

    if(head != NULL){
        return temp;
    }

    Node *curr = head;

    while(curr -> next != NULL){
        curr = curr -> next;
    }

    curr -> next = temp;
    temp -> prev = curr;

    return head;

}

int main(){
    // Creating a doubly linked list of 3 elements
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head -> next = temp1;
    temp1 -> prev = head;

    temp1 -> next = temp2;
    temp2 -> prev = temp1;

    head = insertEnd(head,50);
    
    return 0;
}