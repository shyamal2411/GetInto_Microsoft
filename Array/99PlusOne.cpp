#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/plus-one/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       
        //chella point thi start karvanu, ane jo 9 mle to 0 kari devano
        // baaki bijo number hoy to ++ karo
        // ++ thai gyu atle vaat puri, to return kari dyo apdo vector.
        for(int i = digits.size()-1; i >= 0; i--){
            if(digits[i] == 9)
                digits[i] = 0;
            else{
                digits[i]++;
                return digits;
            }
        }
         // if the program runs to this point, each 9 is now a 0.
      // to get a correct solution, we need to add one more element with 
      // a value of zero AND set digits[0] to 1 (in the most significant position)
      // to account for the carry digit.
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};

int main(){
    Solution ss;
    vector<int> digits = {1,2,3};
    for(auto C: ss.plusOne(digits))
        cout<<C<<" ";
}