#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void *removeDuplicates(Node *head){
    if(head == NULL) return head;

    Node *curr = head;

    while(curr->next != NULL){
        if(curr->data == curr->next->data){
             Node *temp = curr->next;
            curr->next = curr->next ->next;
            delete temp;
        }else{
            curr = curr->next;
        }
    }

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
    Node* head = new Node(10);
    head -> next = new Node(30);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(30);

    removeDuplicates(head);
    printList(head);
    return 0;
}