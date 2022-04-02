#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/searching-array-adjacent-differ-k/
int search(vector<int> nums, int x, int k){
    int n = nums.size();
    int i = 0;

    while(i < n){
        if(nums[i] == x)
        return i;

        i += max(1, k - abs(nums[i] - x)/k);
    }
    return -1;
}

int main(){
    vector<int> nums = {2,4,5,6,6,7};
    int x = 3, k = 2;
    cout<< search(nums, x, k)<<endl;
}