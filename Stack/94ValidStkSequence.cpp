#include<bits/stdc++.h> 
using namespace std;

// 16/03/2022
// https://leetcode.com/problems/validate-stack-sequences/
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
   
// Time: O(n)
// Space:O(n)

       int i=0, j=0;
        stack<int> s;
        for(i = 0; i < pushed.size(); i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[j]){
                s.pop(); j++;
            }
        }
        return s.empty();
    }
    bool validateStackSequences2(vector<int>& push, vector<int>& pop){
// Time: O(n)
// Space:O(1)
        int i = 0, j = 0;
        for(auto x: push){
            push[i++] = x;
            while(i > 0 && push[i-1] == pop[j]){
                i--; j++;
            }
        }
        return i == 0;
    }
};



int main(){
    Solution ss;
    vector<int> pushed = {1,2,3,4,5};
    vector<int> popped = {4,5,3,2,1};
    cout<<ss.validateStackSequences(pushed, popped);
    return 0;
}