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


void findMiddleElementUsingTwoPointer(Node* head){
    if(head == NULL){
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next != NULL){
        slow = slow->next; // slow pointer travel 1 element forward
        fast = fast->next->next; // fast pointer travel 2 elements forward
    }

    cout<< slow->data;
}


int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    findMiddleElement(head); // Normal Approach - 2 traversal is required
    findMiddleElementUsingTwoPointer(head); // Effective Approach - Only 1 traversal is required
    
    return 0;
}