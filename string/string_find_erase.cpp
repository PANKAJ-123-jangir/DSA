//leetcode 1910
#include<iostream>
#include<string>
using namespace std;
int main(){
   string st="tabcdabcrfabcid";
   string f="abc";
   while(st.length()!=0 && st.find(f)<st.length()){
       st.erase(st.find(f),f.length());
   }
   cout<<st;
return 0;
}