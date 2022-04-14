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