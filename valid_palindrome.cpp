#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        //isalnum- checks whether the argument passed is an alphanumeric
        int n=s.size()-1;
        int i=0;
        while(i<n){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[n])){
                n--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[n])){
                return false;
            }
            i++;
            n--;
            
        }
        return true;
    }
};

int main(){
    Solution sol;
    cout<<"Enter a phrase to check if its palindrome:\n";
    string str;
    getline(cin,str);
    if(sol.isPalindrome(str)){
        cout<<"\n"<<str<<" is a Palindrome!";
    }
    else{
        cout<<"\n"<<str<<" is not a Palindrome!";
    }
}