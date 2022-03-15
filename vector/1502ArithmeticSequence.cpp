#include<bits/stdc++.h> 
using namespace std;

// 15/03/2022
// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() < 2) return false;
        if(nums.size() < 3) return false;
        int diff = 0; bool ans;
        diff = nums[1] - nums[0];
        // cout<<diff<<endl;
        for(int i = 2; i < nums.size(); i++){
            if(diff != (nums[i] - nums[i-1]))
            return false;
        }
        return true;
    }
};

int main(){
    Solution ss;
    vector<int> nums = {3,5,1};
    cout<< ss.canMakeArithmeticProgression(nums)<<endl;
    return 0;
}