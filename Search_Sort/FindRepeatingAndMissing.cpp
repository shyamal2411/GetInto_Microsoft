#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/
class Solution{
public:
    int findDuplicate(vector<int> nums){
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {
            if(nums[i] == nums[i+1])
                return nums[i];
        }
        return -1;
    }
    int findMissing(vector<int> nums){
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {
            if(nums[i] + 1 != nums[i+1])
                return nums[i] + 1;
        }
        return -1;
    }
};

class solution2{
public: 
    int findDuplicate(vector<int> nums){
        unordered_map<int, bool> mp;
        for(auto i:nums)
        mp[i]++;

        for(auto i:mp)
        {
            if(i.second > 1)
                return i.first;
        }
        return -1;
    }
    int findMissing(vector<int> nums){
        int n = nums.size();
        int sum = (n * (n+1))/2;
        for(auto i:nums)
        sum -= i;
        return sum;
    }
};

int main(){
Solution ss;
vector<int> nums = { 7, 3, 4, 5, 5, 6, 2 };
cout<<ss.findDuplicate(nums)<<endl;
cout<<ss.findMissing(nums)<<endl;
return 0;
}