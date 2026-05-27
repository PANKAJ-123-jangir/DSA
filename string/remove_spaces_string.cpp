//a sentence is given i have to replace 
//all the spaces in the sentence with @40
//i have used another string to store the replaced string
#include<iostream>
#include<string>
using namespace std;
// void replaced_st(string st){
//     string ch;
//     int i=0,j=0;
//     while(i<st.length()){
//         ch.push_back(st[i]);
//         i++;
//         if(st[i]==' '){
//            ch.push_back('@');
//            ch.push_back('4');
//            ch.push_back('0');
//            i++;
//         }

//     }
//     cout<<"the replaced sentence is:"<<endl;
//     cout<<ch;
// }
void replaced_st(string st){
    for(int i=0;i<st.length();i++){
        if(st[i]==' '){
           st.erase(i,1);
           st.insert(i,"@40");
           //we can also use replace function n place of above 2lines
           //st.replace(i,1,"@40");
           //st.replace(starting index,len of string from i is removed,what you want to insert)
           i=i+2;
        }
    }
    cout<<st;
    cout<<endl;
}
int main(){
    string st;
    cout<<"enter the sentence"<<endl;
    getline(cin,st);//input sentence
    replaced_st(st);
    return 0;
}