#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
       int num = head -> val;
        while(head -> next != NULL){
            num = num * 2 + head -> next -> val;
            head = head -> next;
        }
        return num;
    }
};

int main(){
    Solution ss;
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(0);
    head -> next -> next = new ListNode(1);
    cout<<ss.getDecimalValue(head)<<endl;
    return 0;
}