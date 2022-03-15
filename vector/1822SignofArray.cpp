#include<bits/stdc++.h> 
using namespace std;

// 15/03/2022
// https://leetcode.com/problems/sign-of-the-product-of-an-array/
class Solution {
public:
    int arraySign(vector<int>& nums) {
       int neg = 0, ans;
        for(int i = 0; i < nums.size(); i++){
            
             if(nums[i] == 0)
                return 0;
            
           else if(nums[i] < 0)
                neg++;
        }
        if(neg%2 == 0)
            return 1;
        else
            return -1;
    }
};

int main(){
    Solution ss;
    vector<int> nums = {-1, -2, -3, -4, -5};
    cout<< ss.arraySign(nums)<<endl;
    return 0;
}