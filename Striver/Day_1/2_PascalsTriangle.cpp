#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int nums) {
        vector<vector<int>> ans(nums);
        for(int i = 0; i < nums; i++){
         ans[i].resize(i+1);
        ans[i][0] = ans[i][i] = 1;
        for(int j = 1; j < i; j++){
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
    }
};

int main(){
    Solution ss;
    vector<vector<int>> nums = ss.generate(5);
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums[i].size(); j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}