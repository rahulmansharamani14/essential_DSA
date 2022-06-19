// Note: If we can have the access to tail pointer that this operation can be done in O(1) time Complexity.


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

Node *insertBegin(Node *head, int value){
    //Naive Approach
    // Time Complexity: O(n)

    Node *temp = new Node(value);

    if(head == NULL){ 
        // Condition when head is NULL and insert node will point to itself
        temp->next = temp;
        return temp;
    } 

    Node *curr = head;

    while(curr->next != head){
        curr = curr->next;
    }

    curr ->next = temp;
    temp ->next = head;
    return temp;

}

Node *insertBegin_withSwap(Node *head, int value){
    //Effective Approach
    // Time Complexity: O(1)

    Node *temp = new Node(value);

    if(head == NULL){
        // Condition when head is NULL and insert node will point to itself
        temp ->next = temp;
        return temp;
    }

    Node *curr = head;

    // Insert that node to next of head and swap values with the head node 
    temp -> next = curr -> next;
    curr -> next = temp;

    // Swapping of values between temp node and head node
    int temp_data = curr -> data;
    curr -> data = temp -> data;
    temp -> data = temp_data;

    return curr;

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

    head = insertBegin_withSwap(head,50);
    printList(head);

    return 0;
}