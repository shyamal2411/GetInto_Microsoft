#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/create-target-array-in-the-given-order/
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0;i<index.size();++i)
            ans.insert(ans.begin()+index[i],nums[i]);
        return ans;
    }
};

int main(){
    Solution ss;
    vector<int> nums = {1,2,3,4};
    vector<int> index = {0,1,2,0};
    for(auto i:ss.createTargetArray(nums,index))
        cout<<i<<" ";
    cout<<endl;
    return 0;
}