#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/convert-sentence-equivalent-mobile-numeric-keypad-sequence/
string printSeq(string s[], string input){
    string output = "";
    int n = input.size();
    for(int i = 0; i < n; i++){

        //check space
        if(input[i] == ' ')
        output += "0";
        //calculate index for each char
        else{
            int pos = input[i] - 'A';
            output += s[pos];
        }
    }
    return output;
}

int main(){
    string str[] ={"2", "22", "222",
                  "3", "33", "333",
                  "4", "44", "444",
                  "5", "55", "555",
                  "6", "66", "666",
                  "7", "77", "777","7777",
                  "8", "88", "888",
                  "9", "99", "999","9999"};

            string input = "SHYAMAL";
            cout<<printSeq(str, input);
            return 0;
}