#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/check-if-a-linked-list-is-circular-linked-list/
struct Node
{
    int data;
    Node *next;
};

void printlist(Node *node)
{
    while (node)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

Node *newNode(int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

bool isCircular(struct Node* head){
    if(head == NULL)
    return true;

    struct Node *node = head -> next;
    while(node != NULL && node != head)
    node = node -> next;

    return (node == head);
}

int main()
{
    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    isCircular(head) ? cout<<"Its Circular\n" : cout<<"Its Not\n";
    cout<<"After making it circular\n";
    head->next->next->next->next = head;
    isCircular(head) ? cout<<"Its Circular\n" : cout<<"Its Not\n";
}