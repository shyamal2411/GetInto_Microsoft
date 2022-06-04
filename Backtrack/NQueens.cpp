#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/n-queens/
class Solution {
public:
    typedef vector<string> vi;
    vector<vector<string>> solveNQueens(int n) {
        vector<vi> ans;
        vi board(n);
        string s(n, '.');
        
        for(int i = 0; i < n; i++)
            board[i] = s;
        
        solve(0, board, ans, n);
        return ans;
    }
    
    public:    
    void solve(int col, vi& board, vector<vi> &ans, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                solve(col + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }
    
    bool isSafe(int row, int col, vi board, int n){
        int duprow = row;
        int dupcol = col;
        
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        row = duprow;
        col = dupcol;
        while(col >= 0){
            if(board[row][col] == 'Q')
                return false;
            col--;
        }
        row = duprow;
        col = dupcol;
        
        while(row < n && col >= 0){
            if(board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
};

int main(){
    Solution ss;
    vector<vector<string>> ans = ss.solveNQueens(4);
    for(auto v : ans){
        for(auto s : v){
            cout << s << endl;
        }
        cout << endl;
    }
}