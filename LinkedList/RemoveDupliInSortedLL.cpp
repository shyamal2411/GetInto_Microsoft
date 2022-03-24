#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        while(current && current->next){
            ListNode* nextnode = current -> next;
            if(current -> val == nextnode->val){
                current -> next = nextnode->next;
            }
            else
                current = nextnode;
        }
        return head;
    }
};

int main(){
    Solution ss;
      ListNode* head = new ListNode(1);
    head -> next = new ListNode(1);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(4);
    head -> next -> next -> next -> next = new ListNode(5);
    // cout<<ss.deleteDuplicates(head)<<endl;
    return 0;
}