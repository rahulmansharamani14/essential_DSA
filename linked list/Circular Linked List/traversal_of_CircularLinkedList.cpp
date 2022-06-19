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
    // Normal Method/Naive Approach
    if(head == NULL) return;

    cout<<head->data<<endl; // First node i.e head

    Node *curr = head ->next;
    while(curr != head){
        cout<<curr->data<<endl;
        curr = curr ->next;
    }
}

void printList_dowhileLoop(Node *head){
    // Effective Approach/Traditional Approach - We use do-while loop because we want to run a loop atleast one time to print the first node/head node
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
    head -> next -> next = new Node(230);

    printList(head);

    printList_dowhileLoop(head);
    return 0;
}