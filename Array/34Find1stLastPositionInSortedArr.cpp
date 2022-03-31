#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size(), start = -1, end = -1;
        vector<int> v;
        for(int i = 0; i < n; i++){
            if(nums[i] == target && start == -1)
                start = i;
            if(nums[i] == target && start != -1)
                end = i;
        }
        v.push_back(start);
        v.push_back(end);
        return v;
    }
};

int main(){
    Solution s;
    vector<int> nums = {5,7,7,8,8,10};
    cout<<s.searchRange(nums, 8)[0]<<" "<<s.searchRange(nums, 8)[1]<<endl;
    return 0;
}