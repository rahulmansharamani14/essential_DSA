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

Node *deleteHead(Node *head){
    //Naive Approach
    //Time Complexity: O(n)

    if(head == NULL) return NULL;

    if(head -> next == NULL){
        // Condition when list only contains single node
        delete head;
        return NULL;
    }

    Node *curr = head;

    //Traverse the list to the end
    while(curr -> next != head){
        curr = curr -> next;
    }

    // Last node will point to head -> next (2nd node) and then delete head and return 2nd node as new head
    curr -> next = head -> next;
    delete head;
    return curr -> next;
}

Node *deleteHead_withSwap(Node *head){
    //Effective Approach
    //Time Complexity: O(1)

    if(head == NULL) return NULL;

    if(head -> next == NULL){
        //Condition when list only contains single node
        delete head;
        return NULL;
    }

    Node *curr = head;

    curr -> data = curr -> next -> data; // Assign the vale of 2nd node to head node
    
    Node *temp = curr -> next; // Pointer to the 2nd node

    curr -> next = curr -> next -> next; //New Head node points to third node

    delete temp; //Delete the 2nd node
    
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
    head ->next->next->next = head;

    head = deleteHead_withSwap(head);
    
    printList(head);
    

    return 0;
}