#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/verifying-an-alien-dictionary/
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {

        unordered_map<char, char> mp;
        for(int i = 0; i < order.size(); i++)
            mp[order[i]] = i + 'a';
        
        for(auto& word: words)
            for(auto& c: word)
                c = mp[c];
        
        return is_sorted(begin(words), end(words));
    }
};

int main(){
    Solution ss;
    vector<string> words;
    words.push_back("hello");
    words.push_back("leetcode");
    words.push_back("world");
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    cout<<ss.isAlienSorted(words, order)<<endl;
    return 0;
}