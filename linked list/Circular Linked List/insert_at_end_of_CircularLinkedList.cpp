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

Node *insertEnd(Node *head, int value){
    //Naive Approach
    // Time Complexity: O(n)

    Node *temp = new Node(value);

    if(head == NULL){
        // Condition when head is NULL and insert node will point to itself and return itself as head
        temp -> next = temp;
        return temp;
    }


    Node *curr = head;
    // Traverse through the whole list and hold the last node
    while(curr -> next != head){
        curr = curr -> next;
    }

    // Last node will point to temp and temp will point to head
    curr -> next = temp;
    temp -> next = head;
    return head;

}


Node *insertEnd_withSwap(Node *head, int value){
    //Effective Approach
    //Time Complexity: O(1)

    Node *temp = new Node(value);

    if(head == NULL){
        // Condition when head is NULL and insert node will point to itself and return itself as head
        temp -> next = temp;
        return temp;
    }

    Node *curr = head;
    
    // Insert the temp node after the head node and swap values
    temp -> next = curr -> next;
    curr -> next = temp;
    
    // Swapping values between temp and head nodes and return head
    int temp_data = curr -> data;
    curr -> data = temp -> data;
    temp -> data = temp_data;

    return temp;

}


void printList(Node *head){
    
    if(head == NULL) return;

    Node *curr = head;

    do{
        cout<<curr->data<<endl;
        curr = curr ->next;
    }while(curr!=head);
}


int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head ->next->next->next = head;

    head = insertEnd_withSwap(head,50);
    printList(head);
    

    return 0;
}