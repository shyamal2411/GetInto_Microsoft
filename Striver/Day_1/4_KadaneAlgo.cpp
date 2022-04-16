#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx = INT_MIN, sum = 0;
        for(auto it:nums){
            sum += it;
            maxx = max(sum, maxx);
            if(sum < 0)
                sum = 0;
        }
        return maxx;
    }
};

int main(){
    Solution ss;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<ss.maxSubArray(nums)<<endl;
    return 0;
}