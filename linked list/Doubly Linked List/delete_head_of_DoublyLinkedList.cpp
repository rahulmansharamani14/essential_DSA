/*
Problem -> Write a function deleteHead(Node *head) which deletes the head node 
of the list and returns the new head.

Idea/Approach ->
1. Check for corner cases like list is empty or only one element is in the list.
2. For all other cases, simply move head to next element and delete the prev element.
3. Return this element as new head.
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

void printList(Node *head){
    if(head == NULL){
        cout << "NULL";
        return;
    }

    cout << head->data << endl;
    printList(head->next);
}

Node *deleteHead(Node *head){
    if(head == NULL) return head;

    if(head->next == NULL){
        delete head;
        return NULL;
    }

    Node *temp = head;
    head = head->next;
    head -> prev = NULL;

    delete temp;
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

    head = deleteHead(head);
    
    printList(head);
    return 0;
}