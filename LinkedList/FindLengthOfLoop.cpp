#include<bits/stdc++.h> 
using namespace std;

// FIND THE LENGTH OF LOOP IN LL
// https://www.geeksforgeeks.org/find-length-of-loop-in-linked-list/
struct Node{
    int data;
    struct Node* next;
};

struct Node* newNode(int key){
    struct Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}


int countNode(struct Node * root){
    int ans = 1;
    struct Node *temp = root;
    while(temp -> next != root){
        ans++;
        temp = temp -> next;
    }
    return ans;
}

int cntNodesinLoop(struct Node *root){
    struct Node *slow = root, *fast = root;
    while(slow && fast && fast -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
        
        if(slow == fast)
        return countNode(slow);
    }
    return 0;
}


int main(){

    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5); 
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next;
    cout<<cntNodesinLoop(head)<<endl;
    return 0;
}