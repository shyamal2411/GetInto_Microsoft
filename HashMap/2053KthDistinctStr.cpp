#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/kth-distinct-string-in-an-array/
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
    for (string& s: arr)
        mp[s]++;   
    for (string& s: arr) {  
        if (mp[s] == 1) {   
            k--;    
            if (k == 0)
                return s;   
        }
    }
    return "";  
    }
};

int main(){
    Solution ss;
    vector<string> arr = {"a", "b", "a", "c", "b", "a", "d", "e", "e"};
    cout<<ss.kthDistinct(arr, 3)<<endl;
    return 0;
}