#include<bits/stdc++.h> 
using namespace std;

// 15/03/2022   
// https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1, tar = n + m -1;
        
        while(j>=0){
            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[tar] = nums1[i];
                tar--; i--;
            }else{
                nums1[tar] = nums2[j];
                tar--; j--;
            }
        }
    }
};

int main(){
    Solution ss;
    vector<int> nums1 = {3,5,1};
    vector<int> nums2 = {2,4,6};
    ss.merge(nums1, 3, nums2, 3);
    for(int i = 0; i < nums1.size(); i++)
        cout<<nums1[i]<<" ";
    cout<<endl;
    return 0;
}