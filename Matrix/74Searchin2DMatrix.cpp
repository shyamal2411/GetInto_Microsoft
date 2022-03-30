#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        
        if(n == 0 || m == 0)
            return false;
        
		// treating matrix as array just taking care of endices
		// [0..n*m]
        int start = 0, end = m*n - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
			// a[x] : matrix[x / m][x % m] formulae
            int ind = matrix[mid/m][mid%m];
            if (target == ind)
                return true;
			// left half
            else if(target < ind)
                end = mid - 1;
            else
			// right half
                start = mid + 1;       
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,50}};
    cout<<s.searchMatrix(matrix, 3)<<endl;
    return 0;
}