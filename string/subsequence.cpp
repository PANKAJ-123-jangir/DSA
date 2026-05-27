#include<iostream>
using namespace std;
#include<vector>
#include<string>
void solve(string st,string output,int index,vector<string>&ans){
    if(index>=st.length()){
        if(output.length()!=0){
            ans.push_back(output);
        }
        return ;
    }
    solve(st,output,index+1,ans);

    char element=st[index];
    output.push_back(element);
    solve(st,output,index+1,ans);


}
vector<string>subsequence(string st){
    vector<string>ans;
    string output;
    int index=0;
    solve(st,output,index,ans);
    return ans;
}
int main()
{   vector<string>ams;
    string st="abc";
    cout<<"subsequences :"<<endl;
   ams= subsequence(st);
    for(string s: ams){
        cout<<s<<" ";
    }    

    return 0;
}