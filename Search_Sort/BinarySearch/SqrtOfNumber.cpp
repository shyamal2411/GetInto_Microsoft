#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/sqrtx/
int sqrtnum(int x){
    int mid, low = 0, high = x;
    if(x<2)
    return x;

    while(low < high){
        mid = low + (high - low) / 2;

        if(x/mid >= mid)
        low = mid + 1;
        else
        high = mid;
    }
    return high - 1;
}


int main(){
    int x = 64;
    cout<<sqrtnum(x)<<endl;
    return 0;
}