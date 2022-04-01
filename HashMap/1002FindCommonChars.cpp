#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/find-common-characters/
class Solution {
public:
   vector<string> commonChars(vector<string>& words) {
	   vector<int> hash1(26, 0);
		vector<int> hash2(26, 0);

		for(auto ch : words[0])
		{
			hash1[ch - 'a']++;
		}
		for(int i = 1; i < words.size() ; i++)
		{
			for(auto ch : words[i])
			{
				hash2[ch-'a']++;
			}
			for(int i = 0 ; i < 26 ; i++)
			{
				hash1[i] = min(hash1[i], hash2[i]);
				hash2[i] = 0;
			}

		}

		vector<string> ans;
		for(int i = 0 ; i < 26 ; i++)

			if(hash1[i] > 0)
			{
				int count = hash1[i];
				while(count--)
				{
					char x = i+ 'a';
					string s ;
					s = x;
					ans.push_back(s);
				}
			}
		return ans;
	}
};

int main(){
    Solution ss;
    vector<string> words = {"bella","label","roller"};
    for(auto i:ss.commonChars(words))
        cout<<i<<" ";
    return 0;
}