#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *reverseListUsingArray(Node *head){
    // Two traversal is required
    // An auxiliary array is required


    vector<int> arr;

    for(Node *curr = head; curr != NULL; curr = curr->next){
        arr.push_back(curr->data);
    }

    for(Node *curr = head; curr != NULL; curr = curr ->next){
        curr -> data = arr.back();
        arr.pop_back();
    }
    return head;
}

Node *reverseListIterative(Node *head){

    if(head == NULL){
        return NULL;
    };
    
    Node *curr = head;
    Node *prev = NULL;

    while(curr != NULL){
        Node* temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    
    return prev;
    
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
    head -> next = new Node(20);
    head -> next -> next = new Node(30);

    head = reverseListUsingArray(head); // Normal Method
    head = reverseListIterative(head); // Effective Method
    printList(head);

    return 0;
}