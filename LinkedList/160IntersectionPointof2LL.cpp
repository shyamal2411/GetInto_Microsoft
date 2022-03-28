#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/intersection-of-two-linked-lists/
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
//     EASIEST SOLUTION
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* one = headA;
        ListNode* two = headB;
        // jo 2 mathi koi pn nullptr hoy to sidhu null
        if(one == NULL || two == NULL)
            return NULL;
        
        //jya sudhi bnne mle nai tya sudhi loop chalavo
        while(one != two && one != NULL && two != NULL){
            one = one -> next;
            two = two -> next; //bnne ne traverse karavo
           
            //jo bnne madya, to gme ee pointer ne return karavo
            if(one == two)
               return one;
            // jo 2 ma thi ek NULL thyu to bija ne point karo
            if(one == NULL)
                one = headB;
            if(two == NULL)
                two = headA;
        }
        return one;
    }
};

int main(){
    Solution ss;
    ListNode* headA = new ListNode(1);
    ListNode* headB = new ListNode(2);
    headA->next = new ListNode(3);
    headB->next = new ListNode(4);
    headA->next->next = new ListNode(5);
    headB->next->next = new ListNode(6);
    headA->next->next->next = new ListNode(7);
    headB->next->next->next = new ListNode(8);
    headA->next->next->next->next = new ListNode(9);
    headB->next->next->next->next = new ListNode(10);
    headA->next->next->next->next->next = new ListNode(11);
    headB->next->next->next->next->next = new ListNode(12);
    headA->next->next->next->next->next->next = new ListNode(13);
    headB->next->next->next->next->next->next = new ListNode(14);
    headA->next->next->next->next->next->next->next = new ListNode(15);
    headB->next->next->next->next->next->next->next = new ListNode(16);
    // cout<<ss.getIntersectionNode(headA, headB)->val<<endl;
    return 0;
}