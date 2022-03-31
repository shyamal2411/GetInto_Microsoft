#include<bits/stdc++.h> 
using namespace std;

// Fixed point means nums[i] == i.
// https://www.geeksforgeeks.org/find-a-fixed-point-in-a-given-array/
// linear search
int fixedPoint(vector<int> &nums){
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i] == i)
            return i;
    }
    return -1;
}

// Binary Seach
int fixedPointBS(vector<int>& nums){
    int n = nums.size();
    int start = 0, end = n - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] == mid)
            return mid;
        else if(nums[mid] > mid)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}


int main(){
    vector<int> nums ={ -10, -1, 0, 3, 10, 11, 30, 50, 100 };
    cout<<"Fixed Point is: "<<fixedPointBS(nums)<<endl;
    return 0;
}