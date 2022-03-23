#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/
class Solution {
public:
    string freqAlphabets(string s) {
        string ans; 
        for(int i = 0; i < s.size(); i++){
            if(i < s.size() - 2 && s[i+2] == '#'){
                ans+='j' + (s[i] - '1')*10 + s[i+1] - '0';
                i += 2;
            }
            else
                ans += 'a' + (s[i] - '1');
        }
        return ans;
    }
};

// We can simply check whehter '#' character appears at position i + 2 to determine which decription rule to apply.

int main(){
    Solution ss;
    string s = "10#11#12";
    cout<<ss.freqAlphabets(s)<<endl;
    return 0;
}