#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
void setMatrixZero(vector<vector<int>> &matrix)
{
    int row = matrix.size(), col = matrix[0].size();
    vector<int> su(row, -1), du(col, -1);

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0){
                    su[i] = 0;
                    du[j] = 0;
                }
            }
        }

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(su[i] == 0 || du[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
}
};

int main(){
    Solution ss;
    vector<vector<int>> ans;
    ans = {{0,1,2,0}, {3,4,5,2}, {1,2,3,4}};
    ss.setMatrixZero(ans);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[0].size(); j++) cout << ans[i][j] << " ";
    }
}