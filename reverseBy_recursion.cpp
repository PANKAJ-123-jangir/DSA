// we have to input any number 
// 412
//output --4 1 2
#include<iostream>
using namespace std;
 void reverse(int n){
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    reverse(n);
    cout<<digit<<" ";
 }
int main(){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    reverse(n);
    return 0;
}