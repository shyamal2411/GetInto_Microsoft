#include<bits/stdc++.h> 
using namespace std;

// 15/03/2022
// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int man, i, maxx = INT_MAX, ans = -1;
        for(int i = 0; i < points.size(); i++){
            if(points[i][1] == y || points[i][0] == x){
                man = abs(x - points[i][0]) + abs(y - points[i][1]);
                if(man < maxx){
                    maxx = man, ans = i;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution ss;
    int x = 3,  y = 4;
    vector<vector<int>> points = {{1,2}, {3,1},{2,4},{2,3},{4,4}};
    cout<< ss.nearestValidPoint(x, y, points)<<endl;
    return 0;
}