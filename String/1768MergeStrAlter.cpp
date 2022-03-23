#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/merge-strings-alternately/
class Solution {
public:
    string mergeAlternately(string one, string two) {
        string ans;
        for(auto i = 0; i < max(one.size(), two.size()); i++){
            if(i < one.size())
                ans += one[i];
            if(i < two.size())
                ans += two[i];
        }
        return ans;
    }
};

int main(){
    Solution ss;
    string one = "abcd";
    string two = "efgh";
    cout<<ss.mergeAlternately(one, two)<<endl;
    return 0;
}