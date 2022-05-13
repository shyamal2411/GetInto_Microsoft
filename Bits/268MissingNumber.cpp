#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans ^= nums[i]^(i+1);
        }
        return ans;
    }
};

int main(){
    Solution ss;
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    cout << ss.missingNumber(nums) << endl;
}