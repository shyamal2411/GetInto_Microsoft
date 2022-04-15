#include<bits/stdc++.h> 
using namespace std;

class Solution{
    public:

    void setZeroes(vector<vector<int>> &mat){
        int i, j, row = mat.size(), col = mat[0].size();
        for(i = 0; i < row; i++){
            for(j = 0; j < col; j++){
                if(mat[i][j] == 0){
                    int ind = i - 1;
                    while(ind >= 0){
                        if(mat[ind][j] != 0){
                            mat[ind][j] = -1;
                        }
                        ind--;
                    }
                    ind = i + 1;
                    while(ind < row){
                        if(mat[ind][j] != 0){
                            mat[ind][j] = -1;
                        }
                        ind++;
                    }
                    ind = j - 1;
                    while(ind >= 0){
                        if(mat[i][ind] != 0){
                            mat[i][ind] = -1;
                        }
                        ind--;
                    }
                    ind = j+1;
                    while(ind < col){
                        if(mat[i][ind] != 0){
                            mat[i][ind] = -1;
                        }
                        ind = j + 1;
                        while(ind < col){
                            if(mat[i][ind] != 0){
                                mat[i][ind] = -1;
                            }
                            ind++;
                        }
                    }
                }
            }
            for(i = 0; i < row; i++){
                for(j = 0; j < col; j++){
                    if(mat[i][j] <= 0){
                        mat[i][j] = 0;
                    }
                }
            }
        }
    }
};


class Solution2 {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int row = mat.size(), col = mat[0].size();
        vector<int> dum1(row, -1), dum2(col, -1);
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(mat[i][j] == 0){
                 dum1[i] = 0;
                 dum2[j] = 0;
                }                    
            }
        }

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(dum1[i] == 0 || dum2[j] == 0){
                    mat[i][j] = 0;
                }
            }
        }
    }
};

class Solution3{
    public:
    void setZeroes(vector<vector<int>> &mat){
        int col0 = 1, row = mat.size(), col = mat[0].size();
        for(int i = 0; i < row; i++){
            if(mat[i][0] == 0) col0 = 0;

            for(int j = 1; j < col; j++){
                if(mat[i][0] == 0){
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }

        for(int i = row - 1; i >= 0; i--){
            for(int j = col - 1; j >= 1; j--){
                if(mat[i][0] == 0 || mat[0][j] == 0){
                    mat[i][j] = 0;
                }
            }
            if(col0 == 0) mat[i][0] = 0;
        }
    }
};


int main(){
    Solution ss;
    vector<vector<int>> vec = {{1,2,3}, {1, 0, 1}, {1, 2, 3}};
    int i, j;
    ss.setZeroes(vec);
    for(i = 0; i < vec.size(); i++){
        for(j = 0; j < vec[0].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}