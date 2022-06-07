#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node *head){
    if(head == NULL){
        cout << "NULL";
        return;
    }

    cout << head->data << endl;
    printList(head->next);
}

int iterativeSearchElement(Node *head, int value){
    Node *curr = head;
    int position = 1;
    while(curr != NULL){
        if(curr->data == value){
            return position;
        }

        position++;
        curr = curr->next;
    }

    return -1;
}

int recursiveSearchElement(Node *head, int value){
    if(head == NULL){
        return -1;
    }
    
    if(head -> data == value){
        
        return 1;
    }

    int result = recursiveSearchElement(head->next, value);

    if(result == -1){
        return -1;
    }

    return result + 1;

}

Node *insertBegin(Node *head, int value){
    Node *temp = new Node(value);
    temp -> next = head;
    return temp;

}

Node *insertEnd(Node *head, int value){
    Node *temp = new Node(value);

    if(head == NULL){
        return temp;
    }

    Node *curr = head;
    while(curr -> next != NULL){
        curr = curr ->next;
    }

    curr ->next = temp;
    return head;

}

Node *deleteBegin(Node *head){

    if(head == NULL){
        return NULL;
    }

    Node *temp = head ->next;
    delete head;
    
    return temp;
}


Node *deleteTail(Node *head){
    Node *curr = head;

    if(head == NULL){
        return NULL;
    }

    if(head -> next == NULL){
        delete head;
        return NULL;
    }

    while(curr ->next ->next != NULL){
        curr = curr ->next;
    }

    delete (curr ->next);
    curr ->next = NULL;
    return head;


}



int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    

    head = deleteTail(head);
    printList(head);
    return 0;
}