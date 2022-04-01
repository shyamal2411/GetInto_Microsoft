#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/divide-array-into-equal-pairs/
class Solution {
public:
    bool divideArray(vector<int>& nums) {
       int n = nums.size(),count=0;
        unordered_map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        
        for(auto &i: mp){
        count += (i.second/2);    
        }
        return count == (n/2);
    }
};


int main(){
    Solution ss;
    vector<int> nums = {3,2,3,2,2,2};
    cout<<ss.divideArray(nums)<<endl;
    return 0;
}