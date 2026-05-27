#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(string digit,vector<string>&ans,string output,int index,string * mapp){
    if(index>digit.length()-1){
        ans.push_back(output);
        return;
    }
    int number=digit[index]-'0';
    string value=mapp[number];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digit,ans,output,index+1,mapp);
        output.pop_back();
    }
}
vector<string>letterCombination(string digit){
    vector<string>ans;
    if(digit.length()==0){
        return ans;
    }
    string output;
    int index=0;
    string mapp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit,ans,output,index,mapp);
    return ans;
}
int main(){
    vector<string>ans;
    string digit;
    cout<<" enter any two numbers from 2-9"<<endl;
    cin>>digit;
    ans=letterCombination(digit);
    for(string st: ans){
        cout<<st<<" ";
    }
    return 0;
}