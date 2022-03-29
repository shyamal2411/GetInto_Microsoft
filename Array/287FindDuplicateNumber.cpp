#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         map<int, int> mp;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
        
//             if(mp[nums[i]]>1)
//                 return nums[i];
//         }
//         return -1;
        while(nums[0] != nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};

int main(){
    Solution ss;
    vector<int> nums = {1,2,3,4,2};
    cout<<ss.findDuplicate(nums);
    return 0;
}