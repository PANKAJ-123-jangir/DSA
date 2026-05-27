//leetcode 128
//i face difficulty in removing other character to keep only number and alphabets
//in changing upper case to lower
//check whether th string is pallindrome or not
#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
bool ispalindrome(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(!isalnum(s[i])){
            i++;
        }
        else if(!isalnum(s[j])){
            j--;
        }
        else{
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
        i++;
        j--;    
        }
    }
    return true;
    
}
int main(){ 
    string st="abc";
    int b=ispalindrome(st);
    cout<<b;
    //cout<<st[0];
    // int n=st.size(); yr kaam karta hai
    // cout<<n;
    return 0;
}