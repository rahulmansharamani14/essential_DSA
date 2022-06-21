/* 
Problem -> Write a function insertBegin(Node *head, int x) which insert the element x 
at the begining of the linked list and returns the new head. 

Idea/Approach -> 
1. Create a temp node of element x.
2. Point temp -> next = head.
3. If head is not NULL, point head -> prev = temp else do nothing because we can't access prev of NULL.
4. return temp as new head.
*/

#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;

    Node(int x){
        data = x;
        prev = next = NULL;
    }
};

Node *insertBegin(Node *head, int x){
    
    Node *temp = new Node(x);
    temp -> next = head;

    if(head != NULL){
        head -> prev = temp;
    }

    return temp;

}

int main(){
    // Creating a doubly linked list of 3 elements
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head -> next = temp1;
    temp1 -> prev = head;

    temp1 -> next = temp2;
    temp2 -> prev = temp1;


    head = insertBegin(head,50);

    cout<<head->data;

    return 0;
}
