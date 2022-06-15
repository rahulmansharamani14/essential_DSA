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

void nthNodeFromLastUsingLenght(Node* head, int n){
    if(head == NULL){
        return;
    }

    Node* curr1 = head;
    int length = 0;

    while(curr1 != NULL){
        curr1 = curr1 -> next;
        length++;
    }

    if(n > length){
        return;
    }

    Node* curr2 = head;

    for(int i = 1; i < (length - n + 1); i++){
        curr2 = curr2 -> next;
    }

    cout << curr2->data<<endl;
}

void nthNodeFromLastUsingTwoPointer(Node* head, int n){
    if(head == NULL){
        return;
    }

    Node* first = head;
    for(int i = 1; i <= n; i++) {
        if(first == NULL){ // condition to check if n is greater than length of linked list
            return;
        }
        first = first->next; // first pointer to point to nth node from starting
        
    }

    Node* second = head;

    while(first != NULL){ // when first pointer is NULL, second pointer will point to node i.e our answer
        second = second->next; // Both pointers will move 1 node forward
        first = first->next;
    }

    cout << second -> data << endl;
}


int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    

    nthNodeFromLastUsingLenght(head, 3); // Method Using Length
    nthNodeFromLastUsingTwoPointer(head, 2); // Method Using Two Pointer
    return 0;
}