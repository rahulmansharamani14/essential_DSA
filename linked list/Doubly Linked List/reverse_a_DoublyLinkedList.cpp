/*
Problem -> Write a function reverseList(Node *head) which reverses the 
doubly linked list and returns the new head.

Idea/Approach ->
- Check explicitly for empty list or only one element in the list. If so, just return head (no modification is required).
- For all other cases, run a loop through the list and swap the prev and next pointers of all the nodes.
- Return the new head.

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

Node *reverseList(Node *head){

    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node *curr = head;
    Node *temp = NULL;

    while(curr != NULL){
        //Swapping the prev and next pointers
        temp = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = temp;

        //Iterating condition
        curr = curr -> prev;
    }

    return temp -> prev;

}

void printList(Node *head){
    if(head == NULL){
        cout << "NULL";
        return;
    }

    cout << head->data << endl;
    printList(head->next);
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

    head = reverseList(head);

    printList(head);
    return 0;
}