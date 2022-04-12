#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/kth-missing-positive-number/
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size(), low = 0, high = n - 1;
            
        while(low <= high){
            int mid = low + (high - low) / 2;
            //arr[m]-(m+1)   --> This gives umber of missing number before m'th index
            if(arr[mid] - (1 + mid) < k) 
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low + k; //Low is still at begining of the array having the missing number.. But we need the kth missing number from low , so we return low +k
    }
};

int main(){
    Solution ss;
    vector<int> arr = {1,2,3,4,7,8,9,11};
    int k = 3;
    cout<<ss.findKthPositive(arr, k);
    return 0;
}