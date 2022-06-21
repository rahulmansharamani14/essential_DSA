/*
Problem -> Write a function deleteLastNode(Node *head) which deletes the last node 
of the list and returns the head of the list.

Idea/Approach ->

1. Check for corner cases like list is empty or only one element is in the list.
2. For all other cases, run a loop through the list and hold on to the last node.
3. To delete the last node, hold on the prev of the last node and point the next of this node to NULL.
4. Finally, delete the last node and return the head.

Time Complexity -> If there are n nodes in the list, time complexity will be O(n).

Note: We can achieve O(1) time complexity if we maintain tail pointer.
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

Node *deleteLastNode(Node *head){
    if(head == NULL) return head;

    if(head ->next == NULL){
        delete head;
        return NULL;
    }

    Node *curr = head;

    while(curr->next != NULL){
        curr = curr->next;
    }

    Node *temp = curr;
    curr = curr -> prev;
    curr -> next = NULL;

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

    head = deleteLastNode(head);
    
    printList(head);
    return 0;
}