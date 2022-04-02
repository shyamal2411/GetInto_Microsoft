#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/counting-bits/
class Solution {
public:
    vector<int> countBits(int n) {
      vector<int> ans;
		
		// iterating fromt 0 to n
        for(int i = 0; i<=n; i++)
        {
			// sum is initialised as 0
            int sum = 0;
            int num = i;
			// while num not equals zero
            while(num != 0)
            {
				// we have to count 1's in binary representation of i, therefore % 2
                sum += num%2;
                num = num/2;
            }
			// add sum to ans vector
            ans.push_back(sum);
        }
        return ans;
    }
};

int main(){
    Solution ss;
    vector<int> ans = ss.countBits(5);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}