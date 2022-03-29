#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/intersection-of-two-sorted-linked-lists/
struct Node{
    int data;
    Node* next;
};

void push(Node** head, int newData);

void push(Node** head, int newData){
    Node* newNode = new Node(); //allocate new node
    newNode -> data = newData; // assign data
    newNode -> next = *head; // link new node
    *head = newNode; //move head to next node
}

void printlist(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* sortedIntersect(Node* a, Node* b){
    Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;

    while(a != NULL && b != NULL){
        if(a -> data == b -> data){
            push((&tail->next), a->data);
            tail = tail->next;
            a=a->next;
            b=b->next;
        }
        else if(a->data < b->data)
            a=a->next;
        else
        b=b->next;
    }
    return dummy.next;
}

int main(){

    Node* one = NULL ;
    Node* two = NULL ;
    Node* intersect = NULL;

    push(&one, 1);
    push(&one, 2);
    push(&one, 4);
    push(&one, 5);
    push(&one, 8);
    push(&one, 9);
    
    push(&two, 1);
    push(&two, 2);
    push(&two, 3);
    push(&two, 12);
    push(&two, 0);
    printlist(intersect);
    intersect = sortedIntersect(one, two);
    printlist(intersect);
    return 0;
}