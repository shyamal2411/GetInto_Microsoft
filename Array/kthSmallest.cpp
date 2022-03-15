#include<bits/stdc++.h> 
using namespace std;

int kthSmallest(int arr[], int n, int k){
    sort(arr, arr+n);
    return arr[k-1];
}


int main(){
    int arr[] = {8,9,7,1,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<< kthSmallest(arr, n, k);
    return 0;
    }