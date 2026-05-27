//leetcode 567
//s1=ab;
//s2=erandibawer;
//now we have to check whether all the arrangements of s1=ab,ba are
//present in s2 or not
#include<iostream>
#include<string>
using namespace std;
//function to check the similar idex values
bool similar_arr(int arr1[],int arr2[]){
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}
int permutationCheck(string s1,string s2){
    //i will store the alphabet count in the array
    int count1[26]={0};
    int count2[26]={0};
    int lens1=s1.length();
    int lens2=s2.length();

    for(int i=0;i<lens1;i++){
        int alphCount=s1[i]-'a';
        count1[alphCount]++;
    }
    //check the number of alphabets in string s2(1st window)
    int i=0;
    while(i<lens1 && i<lens2){
        int a=s2[i]-'a';
        count2[a]++;
        i++;
    }
    
    if(similar_arr(count1,count2)){
            return 1;
        }
    //check all the window till s2 length
    while(i<lens2){
        
        int current=s2[i]-'a';
        count2[current]++;
        //we have to subtract the i-lens1
        //because we are checking another window
        //the value of prev window which is already stored in the array
        //will give wrong answer
        int prev=s2[i-lens1]-'a';
        count2[prev]--;
        i++;
        if(similar_arr(count1,count2)){
            return 1;
        }
    }
     return 0;
}
int main(){
    string s1 ="ba";
    string s2="eidbaooo";
    int check=permutationCheck(s1,s2);
    cout<<check;
    return 0;
}