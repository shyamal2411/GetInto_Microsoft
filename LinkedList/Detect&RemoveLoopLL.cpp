#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/
struct Node{
    int data;
    struct Node* next;
};

struct Node* newNode(int key){
    struct Node* temp = new Node();
    temp -> data = key;
    temp -> next = NULL;
    return temp;
}
void removeLoop(struct Node*, struct Node*);

int detectandRemove(struct Node* head){
    struct Node* slow = head, *fast = head;
    while(slow && fast && fast -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast){
            removeLoop(slow, head);
            return 1;
        }
    }
    return 0;
}

void removeLoop(struct Node* loopNode, struct Node* head){
    struct Node* fastt = loopNode, *sloww = loopNode;
    int k = 1, i;
    while(fastt -> next != sloww){
        fastt = fastt -> next;
        k++;
    }

    fastt = head;
    sloww = head;

    // go to kth node from head
    for(i = 0; i < k; i++)
        sloww = sloww -> next;

        // find the loop
        while(sloww != fastt){
            fastt = fastt -> next;
            sloww = sloww -> next;
        }

        //now until we don't find the loop, move the slow pointer
        while(sloww -> next != fastt)
        sloww = sloww -> next;

        //now this slow is standing at the last node of the loop
        //so simply set the next of this slow to NULL
        sloww -> next = NULL;
}

void printlist(struct Node* head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}

int main(){
    struct Node* head = newNode(50);
    head -> next = newNode(20);
    head -> next -> next = newNode(15);
    head -> next -> next -> next = newNode(4);
    head -> next -> next -> next -> next = newNode(10);

    head->next->next->next->next->next = head->next->next;
    detectandRemove(head);
    printlist(head);
    return 0;
}