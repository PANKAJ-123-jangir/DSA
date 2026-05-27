//leetcode -1047
//this code is not optimized
//use stack for O(n) time complexity
#include<iostream>
#include<string>
using namespace std;
string removeDuplicates(string s){
    int n=s.length(),i=0;
    while(i<n-1){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            i=0;
        }else{
        i++;
        }
    }
    return s;
}
int main(){
    string s="abbaca";
    cout<<removeDuplicates(s);
    return 0;
}