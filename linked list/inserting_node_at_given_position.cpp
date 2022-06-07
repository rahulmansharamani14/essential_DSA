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


Node *InsertPosition(Node *head, int position, int value){
    Node *temp = new Node(value);

    if(position == 1){
        temp ->next = head;
        return temp;
    }

    Node *curr = head;

    for(int i = 1; i<=position - 2 && curr != NULL; i++){
        curr = curr->next;
    }

    if(curr == NULL){
        return head;
    }

    temp ->next = curr->next;
    curr->next = temp;
    return head;
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    

    head = InsertPosition(head,4,45);
    printList(head);
    return 0;
}