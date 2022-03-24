#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/linked-list-cycle-ii/
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode *slow=head, *fast=head;
        
        while(slow!=NULL && fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next; //same as the previous question, apply floyd's algo
            fast=fast->next->next;// fast will move by 2 steps, slow will move by one step
            
            if(slow==fast)
            {
                fast=fast;// loop exists if they meet at a node
                slow=head;
                
                while(slow!=fast) // if they don't then move fast also by one step.
                    // and once they meet, return any of the 2 pointers.
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return fast;
            }
        }
        //return null if there is no loop.
        return NULL;
    }
};
int main(){
    Solution ss;
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(4);
    head -> next -> next -> next -> next = new ListNode(5);
    cout<<ss.detectCycle(head)->val<<endl;
    return 0;
}