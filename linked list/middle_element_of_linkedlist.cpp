#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


void findMiddleElement(Node* head){
    if(head == NULL){
        return;
    }

    int count = 0;
    Node* curr1 = head;
    
    while(curr1 != NULL){
        curr1 = curr1->next;
        count++;
    }

    Node* curr2 = head;

    for(int i = 0; i < count/2; i++){
        curr2 = curr2->next;
    }

    cout<<curr2->data;
}


int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    findMiddleElement(head);
    
    return 0;
}