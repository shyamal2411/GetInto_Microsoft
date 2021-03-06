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
        ListNode *kthNode = NULL, *kthNodeFromEnd = NULL, *temp = head;
	int len = 0, idx = 0;
	while(temp)
		temp = temp -> next, len++;
	temp = head;
	while(temp){
		if(idx == k - 1) kthNode = temp;
		if(idx == len - k) kthNodeFromEnd = temp;
		if(kthNode && kthNodeFromEnd) break;
		temp = temp -> next, idx++;
	}   
	swap(kthNode -> val, kthNodeFromEnd -> val);
	return head;
    }

    
    ListNode* swapNodes(ListNode* head, int k){
        if(head == 0) return head;
        ListNode* front = head;
        ListNode* back = head;
        ListNode* curr = head;

        while(k > 1){
            curr = curr -> next;
            back = back -> next;
        }
        while(curr -> next){
            curr = curr -> next;
            front = front -> next;
        }
        swap(front -> val, back -> val);
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