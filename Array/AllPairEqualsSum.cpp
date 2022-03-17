#include<bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    int getPairs(vector<int>& vec, int sum){
        //  Time: O(n^2)
        // Space: O(1)
            int count = 0;
            int i,j;
            for(i = 0; i < vec.size(); i++){
                for(j = i+1; j < vec.size(); j++){
                    if(vec[i] + vec[j] == sum){
                        count++;
                    }
                }
            }
            return count;
        }

        int getPairsHash(vector<int>& vec, int sum){
        // Time: O(n)
        // Space: O(1)
        int count = 0;
        unordered_map<int, int> map;
        for(auto x: vec){
            map[x]++;}
            int count2 = 0;

            for(auto  x:vec){
                count2 += map[sum-vec[x]];

                if(sum - vec[x] == vec[x])
                    count2--;
            }
        return count2/2;
        }
};


int main(){
Solution ss;
vector<int> vec = {1,2,3,4,5};
int sum = 6;
cout<<ss.getPairs(vec, sum);
return 0;
}