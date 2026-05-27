//leetcode 443
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int compress(vector<char>& chars){
    int n=chars.size();
    int i=0;
    int index=0;
    while(i<n){
       int j=i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }
        chars[index++]=chars[i];
        int count=j-i;
        if(count>1){
            string cnt=to_string(count);
            for(char x:cnt){
                chars[index]=x;
                index++;
            }
        }
        i=j;
    }
    return index;
}
int main(){
    vector<char>ch={'a','a','b','c','c','c','d'};
    int size=compress(ch);
    cout<<size;
    return 0;
}