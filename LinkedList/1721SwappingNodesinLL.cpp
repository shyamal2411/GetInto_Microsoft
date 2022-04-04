#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *kthNode = NULL, *kthNodeFromEnd = NULL, *iter = head;
	int len = 0, idx = 0;
	while(iter)
		iter = iter -> next, len++;
	iter = head;
	while(iter){
		if(idx == k - 1) kthNode = iter;
		if(idx == len - k) kthNodeFromEnd = iter;
		if(kthNode && kthNodeFromEnd) break;
		iter = iter -> next, idx++;
	}   
	swap(kthNode -> val, kthNodeFromEnd -> val);
	return head;
    }
};

void printlist(ListNode* node){
    while(node){
        cout<<node->val<<" ";
        node = node->next;
    }
    cout<<endl;
}

int main(){
    Solution ss;
    ListNode *head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(4);
    head -> next -> next -> next -> next = new ListNode(5);
    head = ss.swapNodes(head, 2);
    printlist(head);
    return 0;
}