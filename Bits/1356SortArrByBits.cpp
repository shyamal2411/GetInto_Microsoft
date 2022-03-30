#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
      static bool compare(const int& a, const int& b){
        int c1 = __builtin_popcount(a);
        int c2 = __builtin_popcount(b);
        if(c1 == c2)
            return a < b;
        return c1 < c2;
    }
    vector<int> sortByBits(vector<int>& arr) {
        std::sort(arr.begin(),arr.end(), compare);
        return arr;
    }
};

int main(){
    Solution ss;
    vector<int> arr = {0,1,2,3,4,5,6,7,8};
    vector<int> res = ss.sortByBits(arr);
    for(auto i:res)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}