#include<iostream>
#include<string>
using namespace std;
void arr(string s ,int n){
    int array[26]={0};
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&& s[i]<='Z'){
            int index=s[i]-'A';
            array[index]++;
        }
        else if(s[i]>='a'&& s[i]<='z'){
            int index=s[i]-'a';
            array[index]++;

        }
    }
    int maxOcc=0;
    int index=0;
    for(int i=0;i<26;i++){
        if(array[i]>maxOcc){
            maxOcc=array[i];
            index=i;
        }
    }
    char ch=index+'a';
    cout<<ch;
}
int main()
{   string st="pankaJ";
    arr(st,26);

    return 0;
}