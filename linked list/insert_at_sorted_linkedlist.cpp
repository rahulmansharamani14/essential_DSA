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

void printList(Node *head){
    if(head == NULL){
        cout << "NULL";
        return;
    }

    cout << head->data << endl;
    printList(head->next);
}

Node *insertSortedList(Node *head, int value){
    // Time Complexity in case of :
    // element to be inserted in first position = O(1)
    // element to be inserted in nth position = O(n)

    Node *temp = new Node(value);

    if(head == NULL){
        return temp;
    }

    if(head->data > value){
        temp ->next = head;
        return temp;
    }
    
    Node *curr = head;

    while(curr->next != NULL && curr -> next -> data < value){
        curr = curr -> next;
    }

    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}

int main(){
    
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    

    head = insertSortedList(head,45);
    printList(head);
    return 0;
}