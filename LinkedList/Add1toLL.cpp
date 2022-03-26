#include<bits/stdc++.h> 
using namespace std;

struct Node{
    int data;
    Node* next;
};
// https://www.geeksforgeeks.org/add-1-number-represented-linked-list/
Node *newNode(int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node *reverse(Node *head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void printlist(Node *node){
    while(node){
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<endl;
}

Node* addOneUtil(Node* head){
    Node* ans = head;
    Node* temp;
    int carry = 1, sum;
    while(head){
        sum = carry + head->data;
        carry = (sum >= 10) ? 1:0;
        sum%= 10;
        head->data = sum;
        temp=head;
        head=head->next;
    }
    if(carry > 0)
    temp -> next = newNode(carry);
    return ans;
}

Node* addOne(Node *head){
    head = reverse(head);
    head = addOneUtil(head); 
    return reverse(head); //reverse modified linkedlist
}

int main(){
    Node *head = newNode(1);
    head->next = newNode(9);
    head->next->next = newNode(8);
    head->next->next->next = newNode(7);
    head->next->next->next->next = newNode(6);
    head->next->next->next->next->next = newNode(5);
    printlist(head);
    head = addOne(head);
    printlist(head);
    return 0;
}