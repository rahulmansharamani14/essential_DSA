// Note: Here we assume that k is less than the number of nodes in the list or length of the list.

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


Node *deleteKthNode(Node *head, int k){

    if(head == NULL) return NULL;

    if(k == 1){
        return deleteHead(head);
    }

    Node *curr = head;
    // Traverse through the list till k - 2 because our curr pointer points to head
    for(int i = 0; i < k - 2; i++){
        curr = curr -> next;
    }

    Node *temp = curr -> next; // Hold the kth node

    curr -> next = curr -> next -> next; // (k - 1)th node will point to (k + 1)th node

    delete temp; //Delete the kth node

    return head;
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

    head = deleteKthNode(head,2);
    
    printList(head);
    

    return 0;
}