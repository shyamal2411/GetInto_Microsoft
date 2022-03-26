#include<bits/stdc++.h> 
using namespace std;

struct Node{
    public:
    int data;
    Node *next;
};

void moveToFront(Node **head){
        if(*head == NULL || (*head)->next == NULL)
        return;

        //second last and last pointers
        Node* secLast = NULL;
        Node* last = *head;

        // bnne pointers ne chelle sudhi traverse karavvana
        while(last -> next !=NULL){
            secLast = last;
            last = last -> next;
        }
        // hve assigning nu kaam

        secLast -> next = NULL; //second last ne direct NULL point karavo
        last -> next = *head; //last ne head point karavo
        *head = last; 
}

void push(Node** headRef, int newData){
    Node* newNode = new Node(); // create new node
    newNode -> data = newData; // assign data
    newNode -> next = (*headRef); // link new node to the list
    (*headRef) = newNode; // move head to point to new node
}
void printlist(Node* node){
    while(node){
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<endl;
}

int main(){
    Node *head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printlist(head);

    moveToFront(&head);

    printlist(head);
    return 0;
}

/*
Algorithm: 
Traverse the list till last node. Use two pointers: one to store the address of last node and other for address of second last node. After the end of loop do following operations. 
i) Make second last as last (secLast->next = NULL). 
ii) Set next of last as head (last->next = *head). 
iii) Make last as head ( *head = last)
*/