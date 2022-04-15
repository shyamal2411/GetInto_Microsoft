#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/next-permutation/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
        for(k = n - 2; k >= 0; k--){
            if(nums[k] < nums[k + 1])
                break;
        }
        if(k < 0){
            reverse(nums.begin(), nums.end());
        } else{
                for(l = n - 1; l > k; l--){
                    if(nums[l] > nums[k])
                        break;
                }
            swap(nums[k], nums[l]);
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
};

int main(){
    Solution ss;
    vector<int> nums = {1,2,3};
    ss.nextPermutation(nums);
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}