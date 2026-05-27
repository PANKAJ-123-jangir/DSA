#include<iostream>
using namespace std;
void intoWords(int n,string *arr){
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    intoWords(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    int n=345;
    string arr[10]={"zero","one","two","three","four","five","six",
                     "seven","eight","nine"};
    intoWords(n,arr);                 
    return 0;
}