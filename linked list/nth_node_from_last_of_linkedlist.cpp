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

void nthNodeFromLast(Node* head, int n){
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

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);

    nthNodeFromLast(head, 1);
    return 0;
}