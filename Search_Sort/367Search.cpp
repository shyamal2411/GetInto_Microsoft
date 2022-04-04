#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/valid-perfect-square/
class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1, high = num;
        while(low<=high){
            long long int mid = low + (high-low)/2;
            if(mid * mid == num){
                return true;
            }
            else if(mid * mid < num){
                low = mid + 1;
            }
            else{
                high = mid - 1; 
            }
        }
        return false;
    }
};

int main(){
    Solution ss;
    cout<<ss.isPerfectSquare(16);
    return 0;
}