#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        
        for(auto i: nums){
            mp[i]++;
        if(mp[i] > n/2)
            return i;
        }
        return -1;
    }
};

int main(){
    Solution ss;
    vector<int> nums = { 7, 3, 4, 5, 5, 6, 2 };
    cout<<ss.majorityElement(nums)<<endl;
    return 0;
}