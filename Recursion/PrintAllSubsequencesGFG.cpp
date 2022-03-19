#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/print-subsequences-string/
void printSub(string input, string output){
    if(input.size() == 0){
        cout<<output<<endl;
        return;
    }
    printSub(input.substr(1), output + input[0]);
    printSub(input.substr(1), output);
}

int main(){
    string output ="";
    string input = "abcde";

    printSub(input, output);
    return 0;
}
