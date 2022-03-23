#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/matrix-diagonal-sum/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int diag1=0,diag2=0;// to Store diagonal Sum
        for(int i=0;i<mat.size();i++){
			//Left diagonal where  i==j (here, I have kept i=j)
            diag1+=mat[i][i];
			//Right Diagonal where i==mat.size()-i-1
            diag2+=mat[i][mat[0].size()-1-i];
        }
		//Check if the we have a common diagonal. If yes, then remove it.
        if(mat.size()%2!=0){
            diag1-=mat[mat.size()/2][mat.size()/2];
        }
		//Return the Sum
        return diag1+diag2;
    }
};

/*The approach is rather simple. All you need to do is traverse row wise. The left diagonal will have i==j values.
 The right diagonal on the other hand will have values where i==size-1-j. Keep the sum in two different variable as leftSum and RightSum. 
 In the end, if your matrix has odd number of rows, this means that there is one common element in diagonal which would be middle element. 
 Subtract it and you will get the sum.
*/

int main(){
    Solution ss;
    vector<vector<int>> mat;
    mat.push_back({1,2,3});
    mat.push_back({4,5,6});
    mat.push_back({7,8,9});
    cout<<ss.diagonalSum(mat);
    return 0;
}