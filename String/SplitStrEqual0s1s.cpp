#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/
class Solution{
    public:
    int maxSubstr(string s, int n){
        int count = 0, zero = 0, one = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '0')
            zero++;
            else
            one++;

            if(zero == one)
            count++;
        }
        if(zero != one)
        return -1;

        return count;
    }
};


int main(){
    Solution ss;
    string s = "0100110101";
    int n = s.size();

    cout<<ss.maxSubstr(s, n);
    return 0;
}