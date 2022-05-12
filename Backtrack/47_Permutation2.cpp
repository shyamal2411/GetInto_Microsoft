#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/permutations-ii/
class Solution {
public:
    vector<vector<int>> ans;
    
    void help(vector<int> &nums, int i){
        if(i == nums.size()){
            ans.push_back(nums);
            return;
        }
        
        unordered_set<int> sett;
        for(int j = i; j < nums.size(); j++){
            if(sett.find(nums[j]) != sett.end()) continue;
            sett.insert(nums[j]);
            swap(nums[i], nums[j]);
            help(nums, i+1);
            swap(nums[i], nums[j]);            
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        help(nums, 0);
        return ans;
    }
};

// THE BEST EXPLANATION: https://youtu.be/is_T6uzlTyg?t=364

int main(){
    Solution ss;
    vector<int> nums = {1,1,2};
    vector<vector<int>> ans;
}