#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/find-smallest-letter-greater-than-target/
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0, high = letters.size();
        while(low < high){
            int mid = low + (high - low) / 2;
            if(letters[mid] <= target) 
                low = mid + 1;
            else
                high = mid;
        }
        return letters[low % letters.size()];
    }
};

int main(){
    Solution ss;
    vector<char> letter = {'c','f','g'};
    char target = 'c';
    ss.nextGreatestLetter(letter, target);
    return 0;
}